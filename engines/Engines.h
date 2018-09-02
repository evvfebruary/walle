#ifndef Engines_h
#define Engines_g


class Engines
{
  public:
    Engines(int, int, int, int);
    int leftMotor;
    int leftMotorReverse;
    int rightMotor;
    int rightMotorReverse;
    void move_forward(void);
    void move_back(void);
    void move_left(void);
    void move_right(void);
    void stop(void);
};

#endif
