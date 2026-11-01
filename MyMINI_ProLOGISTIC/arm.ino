void arm_openDown()
  {
    servoL(servo_L);
    servoR(servo_R);
    delay(300);
    servoUpDown(servo_down);
    delay(100);
  }
void arm_openUp()
  {
    servoL(servo_L);
    servoR(servo_R);
    delay(300);
    servoUpDown(servo_down+90);
    delay(100);
  }
void arm_closeDown()
  {
    servoL(servo_L-100);
    servoR(servo_R-100);
    delay(100);
    servoUpDown(servo_down);
    delay(300);
  }
void arm_downClose()
  {
    servoUpDown(servo_down);
    delay(300);
    servoL(servo_L-100);
    servoR(servo_R-100);
    delay(100);
  }
void arm_ready()
  {
    servoL(servo_L-20);
    servoR(servo_R-20);
    servoUpDown(servo_down);
  }
void arm_closeUp()
  {
    servoL(servo_L-100);
    servoR(servo_R-100);
    delay(300);
    servoUpDown(servo_down+90);
    delay(100);
  }

void arm_minOpenUp()
  {
    servoL(servo_L-60);
    servoR(servo_R-60);
    delay(300);
    servoUpDown(servo_down+90);
    delay(100);
  }

void arm_upClose()
  {
    servoUpDown(servo_down+90);
    delay(300);
    servoL(servo_L-100);
    servoR(servo_R-100);
    delay(100);
    
  }
void arm_readyRight()
  {
    servoUpDown(servo_down);
    servoL(servo_L-50);
    servoR(servo_R+20);
  }
void arm_readyLeft()
  {
    servoUpDown(servo_down);
    servoL(servo_L+20);
    servoR(servo_R-50);
  }
void place()
  {
    servoL(servo_L-90);
    servoR(servo_R-90);
    delay(200);
    servoUpDown(servo_down+90);
  }
void servoL(int sl)
  {
    servo(18, sl);    // GP18: มุมซ้าย = 180° - sl
  }
void servoR(int sr)
  {
    servo(22, 180-sr);    // GP18: ตั้งมุมตามค่า sr
  }
void servoUpDown(int updown)
  {
    servo(28, 180-updown);   // GP28: มุมยก = 180° - updown
  }