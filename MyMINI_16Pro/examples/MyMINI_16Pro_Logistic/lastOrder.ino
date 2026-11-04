void LGC1()
  {
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 30); turn(tfl, 25, f9, 15);
    // f_line(10, 10, 0.4f, 3, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10);turn(tr, 40, f0, 10);turn(tr, 40, f11, 10);
         f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
      
    C1 = 1;
  }
void LGC2()
  {
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 30); turn(tfr, 25, f6, 15);
    // f_line(10, 10, 0.4f, 5, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10);turn(tl, 40, f15, 10); turn(tl, 40, f4, 10);
      f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
    
    C2 = 1;
  }
void LGC3()
  {
    f_line(50, 50, 0.4f, 40, 0);
    f_line(20, 20, 0.4f, f0, 30); turn(tfl, 25, f9, 15);
    // f_line(10, 10, 0.4f, 3, 10);
    slide_drop();
        b_line(30, 30, 0.4f, cl&cr, 10);turn(tr, 40, f0, 10);turn(tr, 40, f11, 10);
        f_line(50, 50, 0.4f, f0, 0);
      f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
    
    C3 = 1;
  }
void LGC4()
  {
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 30);motor(30, -30);delay(200); turn(tfr, 25, f6, 15);
    // f_line(10, 10, 0.4f, 5, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10);turn(tl, 40, f15, 10); turn(tl, 40, f4, 10);
         f_line(50, 50, 0.4f, f0, 0);
      f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
    
    C4 = 1;
  }
void LGC5()
  {
    f_line(40, 40, 0.4f, f0, 30); turn(tfl, 25, f9, 15);
    // f_line(10, 10, 0.4f, 3, 10);
    slide_drop();
        b_line(30, 30, 0.4f, cl&cr, 10);turn(tr, 40, f0, 10);turn(tr, 40, f11, 10);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
      
    C5 = 1;
  }
void LGC6()
  {
    f_line(40, 40, 0.4f, f0, 30);motor(-30, 30);delay(200); turn(tfr, 25, f6, 15);
    // f_line(10, 10, 0.4f, 5, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10);turn(tl, 40, f15, 10); turn(tl, 40, f4, 10);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f11, 5);
         f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
         f_line(30, 30, 0.4f, cr, 0);
      f_line(30, 30, 0.0f, b0, 1);
      motor(30, 30);
      delay(100);
      motor(-30, -30);
      delay(10);
      motor(1, 1);
      
    C6 = 1;
  }