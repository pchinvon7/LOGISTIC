// void check_can_to_order()
//   {
//     if(_can_color == order_color[0])
//       {
//         GC1();
//       }
//     else if(_can_color == order_color[1])
//       {
//         GC2();
//       }
//     else if(_can_color == order_color[2])
//       {
//         GC3();
//       }
//     else if(_can_color == order_color[3])
//       {
//         GC4();
//       }
//     else if(_can_color == order_color[4])
//       {
//         GC5();
//       }
//     else if(_can_color == order_color[5])
//       {
//         GC6();
//       }
//   }


namespace {
// Do not let a partial/duplicated scan select a physical drop location.  The
// screen can still show a correctly read can colour, while this array is what
// actually decides GC1..GC6.
bool orderMappingIsValid() {
  static const char* const names[6] = {
      "RED", "GREEN", "YELLOW", "BLUE", "WHITE", "BLACK"};
  uint8_t seen = 0;
  for (uint8_t slot = 0; slot < 6; ++slot) {
    int8_t color = -1;
    for (uint8_t i = 0; i < 6; ++i) {
      if (order_color[slot] == names[i]) {
        color = static_cast<int8_t>(i);
        break;
      }
    }
    if (color < 0 || (seen & (1u << color))) return false;
    seen |= static_cast<uint8_t>(1u << color);
  }
  return seen == 0x3f;
}

void printOrderMapping() {
  Serial.print(F("ORDER: map "));
  for (uint8_t slot = 0; slot < 6; ++slot) {
    if (slot) Serial.print(F(" | "));
    Serial.print(slot + 1);
    Serial.print('=');
    Serial.print(order_color[slot]);
  }
  Serial.println();
}
} // namespace

void check_can_to_order()
  {
    if (!orderMappingIsValid()) {
      Serial.println(F("ORDER: invalid/incomplete mapping -- drop cancelled"));
      printOrderMapping();
      motor(1, 1);
      return;
    }

    int slot = -1;
    if (_can_color.length() > 0)
      for (int i = 0; i < 6; i++)
        if (_can_color == order_color[i]) { slot = i; break; }

    Serial.print(F("ORDER: can=[")); Serial.print(_can_color);
    Serial.print(F("] -> slot ")); Serial.println(slot + 1);
    printOrderMapping();

    switch (slot)
      {
        case 0: GC1(); break;
        case 1: GC2(); break;
        case 2: GC3(); break;
        case 3: GC4(); break;
        case 4: GC5(); break;
        case 5: GC6(); break;
        default:
          Serial.println(F("ORDER: can colour has no mapped slot -- drop cancelled"));
          motor(1, 1);
          break;
      }
  }