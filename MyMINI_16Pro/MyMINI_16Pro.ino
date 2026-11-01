#include <MyMINI_16Pro.h>

#include <Wire.h>

int servo_down = 40;
int servo_L = 160;
int servo_R = 160;
void setup() 
  {
      robot_setup();
      pinMode(1, INPUT_PULLUP);
      set_line_error_monitor(true);  
      
      // servo(18, 0);
      //arm_openDown();  // สำหรับประกอบหุ่นยนต์
      servo(28, 10);
      // arm_closeDown(); // สำหรับแข่งขัน
      wait_button();
      // wait_button() has already selected real gyro or estimated heading.

      ////----------------------------------------------->>>
      ////----------------------------------------------->>>

      
      //  slide_set();
      //  getCan();
      //  delay(200);

      Order3C1();
      // getCan();
      //  GC1();
      // drop();
      // Order1C1();
      // getCan();
       
        
      
        
      




      ////----------------------------------------------->>>
      ////----------------------------------------------->>>
  
////----------------------------------------------->>>
////----------------------------------------------->>>
  }   ///ห้ามลบ

void loop()
  {    
  //         if (tcs0.readFast()) {
  //   //Serial.print("TCS0: "); Serial.println(tcs0.getColor());
  //   //tcs0.printRaw();
  //   //Serial.println(tcs0.getColor());
  //   Serial.println(tcs0._Raw());
  // }
    read_gyro();
    // Serial.println(digitalRead(1));
    //Serial.println(readADC_F());
     delay(30);

    // servo(18, 30); delay(1000);
    // servo(18, 120); delay(1000);
    //  delay(30);
  }

