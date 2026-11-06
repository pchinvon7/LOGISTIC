void reOrder1()
  {
    slide_up(100);
    servo(28, 130);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tl, 40, f5, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C1 = 0;
  }
void reOrder2()
  {
    slide_up(100);
    servo(28, 140);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, f15, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tr, 40, f11, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C2 = 0;
  }
void reOrder3()
  {
    slide_up(100);
    servo(28, 130);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tl, 40, f5, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C3 = 0;
  }
void reOrder4()
  {
    slide_up(100);
    servo(28, 140);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, f15, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tr, 40, f11, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C4 = 0;
  }
void reOrder5()
  {
    slide_up(100);
    servo(28, 130);
    f_line(30, 30, 0.4f, f0, 1); turn(tcl, 40, f5, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tl, 40, f5, 10);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C5 = 0;
  }
void reOrder6()
  {
    slide_up(100);
    servo(28, 140);
    f_line(30, 30, 0.4f, f15, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 7, 10);
    slide_down(50);
    delay(200);
    servo(18, 145);
    delay(200);
    slide_up(800);
    delay(200);
    b_line(20, 20, 0.4f, cl, 10); turn(tr, 40, f11, 10);
    f_line(50, 50, 0.4f, cl, 10);
    // servo(28, 70);
    // slide_set();
    servo(18, 145);
    C6 = 0;
  }
void check_re_order()
  {
    if(_bic_color == order_color[0])
      {
        reOrder1();
        emptyOrder();
        LGC1();
      }
    else if(_bic_color == order_color[1])
      {
        reOrder2();
        emptyOrder();
        LGC2();
      }
    else if(_bic_color == order_color[2])
      {
        reOrder3();
        emptyOrder();
        LGC3();
      }
    else if(_bic_color == order_color[3])
      {
        reOrder4();
        emptyOrder();
        LGC4();
      }
    else if(_bic_color == order_color[4])
      {
        reOrder5();
        emptyOrder();
        LGC5();
      }
    else if(_bic_color == order_color[5])
      {
        reOrder6();
        emptyOrder();
        LGC6();
      }
  }