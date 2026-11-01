void GC1()
  {
    f_line(50, 50, 0.4f, f15, 0);
    f_line(50, 50, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f15, 0);
    f_line(30, 30, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f0, 1); turn(tfl, 90, f5, 5);
    f_line(10, 10, 0.4f, 4, 10);
    delay(200);
    // drop
    b_line(30, 30, 0.2f, cl, 1); turn(tl, 40, f5, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, cl, 1);
  }
void GC2()
  {
    f_line(50, 50, 0.4f, f15, 0);
    f_line(50, 50, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f15, 0);
    f_line(30, 30, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f10, 5);
    f_line(10, 10, 0.4f, 4, 10);
  }
void GC3()
  {
    f_line(50, 50, 0.4f, f15, 0);
    f_line(30, 30, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tfl, 90, f5, 5);
    f_line(10, 10, 0.4f, 4, 10);
  }
void GC4()
  {
    f_line(50, 50, 0.4f, f15, 0);
    f_line(30, 30, 0.4f, cr, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f10, 5);
    f_line(10, 10, 0.4f, 4, 10);
  }
void GC5()
  {
    f_line(80, 80, 0.4f, 15, 0);
    f_line(40, 40, 0.4f, f15, 1); turn(tfl, 90, f5, 5);
    f_line(10, 10, 0.4f, 4, 10);
  }
void GC6()
  {
    f_line(80, 80, 0.4f, 15, 0);
    f_line(40, 40, 0.4f, f15, 1); turn(tfr, 90, f10, 5);
    f_line(10, 10, 0.4f, 4, 10);
  }