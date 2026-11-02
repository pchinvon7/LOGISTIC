void emptyOrder()
  {
    griper_set();
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, 20, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tfr, 90, f10, 5);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 1); turn(tcl, 40, f6, 10);
    setGetFloor();
    f_line(30, 30, 0.4f, 5, 0);
    f_line(10, 10, 0.4f, 8, 10);
    GetFloor();
    b_line(30, 30, 0.4f, cl, 20); turn(tl, 40, f6, 10);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 5); turn(tfl, 90, f6, 5);
    f_line(40, 40, 0.4f, 20, 0);
    f_line(40, 40, 0.4f, f0, 0);
    f_line(30, 30, 0.4f, cl, 10);
  }
void GetReOrder()
  {
    
  }