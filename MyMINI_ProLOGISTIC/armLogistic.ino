void slide_down()
  {
    pinMode(0, INPUT_PULLUP);
    do{servo(22, 0);}while(digitalRead(0) == 1);
    servo(22, 90);
    pinMode(0, INPUT_PULLUP);
  }
void slide_up(int time)
  {
    pinMode(0, INPUT_PULLUP);
    servo(22, 180);
    delay(time);
    servo(22, 90);
    pinMode(0, INPUT_PULLUP);
  }
void set_can()
  {
    servo(18, 0);
  }
void close()
  {
    servo(18, 40);
  }