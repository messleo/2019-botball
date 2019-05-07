#include <kipr/botball.h>
//caliberate the direction and distance
int main()
{
    motor(1,-50);
    motor(2,-50);
    msleep(1000);
    // it will go 14.5cm 
    motor(1,50);
    msleep(1500);
    //turn right 180 degree
    //motor(1,50);
    //msleep(600);
    //turn right 90 degree 
    return 0;
}
