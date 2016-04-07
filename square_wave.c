#include <stdio.h>
#include <wiringPi.h>
#include <time.h>

#define LED 0 // BCM.GPIO pin 17 = wiringPi pin 0

time_t start, now;
double diff_time;
int terminated = 1;
int main (void)
{
start = time(NULL);
wiringPiSetup () ;
pinMode (LED, OUTPUT) ;

int period = 110; 

period /= 2; 

//for(int i = 13618; i>=0; i--) 
while (terminated)
{
 now = time(NULL);
 diff_time = now-start;
 if (diff_time >= 30.0)
 {
    terminated = 0;
 }
 digitalWrite (LED, 1) ; // On
 delayMicroseconds(period) ; // mS
 digitalWrite (LED, 0) ; // Off
 delayMicroseconds(period) ;
}
return 0 ;
}
