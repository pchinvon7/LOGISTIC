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
    servo(18, 130);
    delay(200);
    slide_up(850);
    delay(200);
    servo(28, 120);
  }
void drop()
  {
    servo(18, 30);
    delay(500);
    servo(18, 0);
    delay(300);
  }
void slide_drop()
  {
    int i ;
    for(i = 140; i > 120; i--)
      {
        servo(18, i);
        delay(20);
        servo(22, 0);
        
      }
    servo(22, 90);
    delay(500);
    servo(18, 50);
    delay(200);
  }
void griper_set()
  {
    servo(28, 10);
    delay(200);
    slide_set();
    slide_up(100);
    servo(18, 55);
    servo(28, 70);
  }
void setGetFloor()
  {
    slide_up(700);
    servo(28, 120);
  }
void GetFloor()
  {
    servo(18, 140);
    delay(200);
    slide_up(200);
  }
void getInFloor()
  {
    slide_down(200);
    delay(200);
    servo(18, 140);
    delay(200);
    slide_up(700);
  }