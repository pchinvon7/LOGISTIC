void GC1()
  {
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(40, 40, 0.4f, f0, 1); turn(tcl, 40, f4, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10); turn(tl, 40, f4, 10);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(30, 30, 0.4f, cl, 10);
        griper_setF();

      
    C1 = 1;
  }
void GC2()
  {
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, f0, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10); turn(tr, 40, f11, 10);
        f_line(50, 50, 0.4f, f0, 0);
        f_line(30, 30, 0.4f, cl, 10);
        griper_setF();
      
    
    C2 = 1;
  }
void GC3()
  {
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, f0, 1); turn(tcl, 40, f4, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
        b_line(30, 30, 0.4f, cl&cr, 10); turn(tl, 40, f4, 10);
        griper_setF();
    
    C3 = 1;
  }
void GC4()
  {
    f_line(50, 50, 0.4f, cl, 0);
    f_line(50, 50, 0.4f, f15, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10); turn(tr, 40, f11, 10);
        griper_setF();
    
    C4 = 1;
  }
void GC5()
  {
    f_line(30, 30, 0.4f, cl, 1); turn(tcl, 40, f4, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
        b_line(30, 30, 0.4f, cl&cr, 10); turn(tl, 40, f4, 10);
        griper_set();
      
    C5 = 1;
  }
void GC6()
  {
    f_line(30, 30, 0.4f, cl, 1); turn(tcr, 40, f11, 10);
    f_line(10, 10, 0.4f, 10, 10);
    slide_drop();
         b_line(30, 30, 0.4f, cl&cr, 10); turn(tr, 40, f11, 10);
         griper_set();
      
    C6 = 1;
  }