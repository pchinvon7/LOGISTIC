#include <MyMINI_Pro.h>
int servo_down = 60;
int servo_L = 115;
int servo_R = 120;
void setup() 
  {
      robot_setup();
      pinMode(0, INPUT_PULLUP);
      set_line_error_monitor(true);
     // arm_openDown();  
      // arm_upClose(); 
      servo(18, 0);
      wait_button();
      // wait_button() has already selected real gyro or estimated heading.

      ////----------------------------------------------->>>
      ////----------------------------------------------->>>

      // GC1();

      // servo(22, 0);









      

      ////----------------------------------------------->>>
      ////----------------------------------------------->>>
  
////----------------------------------------------->>>
////----------------------------------------------->>>
  }   ///ห้ามลบ

void loop() {
  
        

  //  float yaw = 0.0f, rateX = 0.0f, rateY = 0.0f, rateZ = 0.0f;
  //  if (gyro_read(yaw, rateX, rateY, rateZ)) {
  //    Serial.print(F("Yaw (deg): "));
  //    Serial.print(yaw, 2);
  //    Serial.print(F(" | rate z (deg/s): "));
  //    Serial.println(rateZ, 2);
  //  } else {
  //    Serial.println(F("Gyro read failed"));
  //  }

  Serial.println(digitalRead(0));
  //Serial.println(error, 2);
  delay(10);
  // motor(30, 30);    // Forward.
  // delay(700);
  // stopFor(400);

  // motor(-30, -30);  // Reverse.
  // delay(700);
  // stopFor(400);

  // motor(-30, 30);   // Turn left using the existing motor(left, right) contract.
  // delay(550);
  // stopFor(400);

  // motor(30, -30);   // Turn right.
  // delay(550);
  // stopFor(800);
}

