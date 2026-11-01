void slide_set()
  {
    do{servo(22, 0);Serial.println(digitalRead(1));}while(digitalRead(1) == 1);
    servo(22, 90);
    delay(200);
    do{servo(22, 180);Serial.println(digitalRead(1));}while(digitalRead(1) == 0);
    servo(22, 90);
  }
void slide_down(int time)
  {
    servo(22, 0);
    delay(time);
    servo(22, 90);
  }
void slide_up(int time)
  {
    servo(22, 180);
    delay(time);
    servo(22, 90);
  }
void set_can()
  {
    servo(18, 0);
  }
void getCan()
  {
    servo(18, 50);
    delay(200);
    slide_up(800);
    delay(200);
    servo(28, 120);
  }
void drop()
  {
    slide_down(200);
  }
void griper_set()
  {
    servo(28, 10);
    delay(200);
    slide_set();
    slide_up(100);
    servo(18, 0);
    servo(28, 60);
  }