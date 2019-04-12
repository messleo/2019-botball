#include <kipr/botball.h>

int main()
{
    create_connect();
    
    create_drive_direct(100,100);
    
    msleep(4000);
    create_drive_direct(50,100);
    msleep(2000);
    
    create_stop();
    
    create_disconnect();
    
    return 0;
}
