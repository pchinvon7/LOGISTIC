void YSL()
  {
    gyro_reset();
    fw_gyro(-90.0f,   30, 1.2f, 25.0f, 1);
    fw_gyro(0.0f,   30, 1.2f, 50.0f, 1);
    fw_gyro(90.0f,   30, 1.2f, 25.0f, 1);
    fw_gyro(0.0f,   30, 1.2f, 15.0f, 1);
    place();
    bw_gyro(0.0f,   30, 1.2f, 5.0f, 1);
    bw_gyro(90.0f,   30, 1.2f, 25.0f, 1);
    bw_gyro(0.0f,   30, 1.2f, 50.0f, 1);
    bw_gyro(-90.0f,   30, 1.2f, 25.0f, 1);
    b_line(30, 30, 0.4f, cl, 20); turn(tl, 40, f5, 10);
  }
void RTC()
  {
    gyro_reset();
    fw_gyro(90.0f,   30, 1.2f, 25.0f, 1);
    fw_gyro(0.0f,   30, 1.2f, 15.0f, 1);
    place();
    fw_gyro(0.0f,   10, 1.2f, 20.0f, 1);
    bw_gyro(0.0f,   30, 1.2f, 20.0f, 1);
    bw_gyro(90.0f,   30, 1.2f, 25.0f, 1);
    bw_gyro(0.0f,   30, 1.2f, 15.0f, 1);
  }