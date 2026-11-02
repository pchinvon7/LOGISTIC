#include <MyMINI_16Pro.h>

#include <Wire.h>
#include <my_TCS.h>

#define TCS34725_ADDRESS 0x29   // ปกติคือ 0x29 (ถ้าเป็น 0x39 ให้เปลี่ยนตรงนี้)

// สร้าง instance พร้อม offset แยก
my_TCS tcs0(0x0100);   // EEPROM 0x0180-0x01A4; sensor on Wire GP4/GP5


int servo_down = 40;
int servo_L = 160;
int servo_R = 160;

int empty = 0;
int Empty = 0;

int C1 = 0;
int C2 = 0;
int C3 = 0;
int C4 = 0;
int C5 = 0;
int C6 = 0;

int lastCan = 0;


void bz()
  {
    tone(MyMINIConfig::PIN_BUZZER, 3500, 400); // เสียง 3500 Hz นาน 400 ms
    noTone(MyMINIConfig::PIN_BUZZER);
  }
void setup() 
  {
      robot_setup();
      setup_color();
      // setup_color();
      pinMode(1, INPUT_PULLUP);
      set_line_error_monitor(true);  
      
      // servo(18, 0);
      //arm_openDown();  // สำหรับประกอบหุ่นยนต์
      // servo(28, 10);`
      servo(18, 50);

      griper_set();


      // calibrateSensor(tcs0, "TCS0 (I2C0)");
      // arm_closeDown(); // สำหรับแข่งขัน
      wait_button();

      // calibrateSensor();
      // wait_button() has already selected real gyro or estimated heading.

      ////----------------------------------------------->>>
      ////----------------------------------------------->>>

      
      // emptyOrder();

      // getCan();
      //  GC1();
      // drop();
      // Order1C1();
      // getCan();
      // emptyOrder();

      // Order1C1();

       run();
      
        
      
      




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
  // Serial.println(readColor(tcs0,ready0));

    // read_gyro();
    // Serial.println(digitalRead(1));
    //Serial.println(readADC_F());
    // if (tcs0.readFast()) {
    // //Serial.print("TCS0: "); Serial.println(tcs0.getColor());
    // //tcs0.printRaw();
    // Serial.print("color: ");Serial.print(tcs0.getColor());
    // Serial.print("   C: ");Serial.println(tcs0._Raw());
    // }
    Serial.println(readADC_F());
    delay(30);

    // servo(18, 30); delay(1000);
    // servo(18, 120); delay(1000);
    //  delay(30);
  }

