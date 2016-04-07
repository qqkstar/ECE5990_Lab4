#include <stdio.h>
#include <time.h>

#define LED 0 // BCM.GPIO pin 17 = wiringPi pin 0

time_t start, now;
double diff_time;
int terminated = 1;
float a = 1000.45;
float b = 1000.45;
float c = 1000.45;
int main (void)
{
start = time(NULL);


//for(int i = 13618; i>=0; i--) 
while (terminated)
{
 now = time(NULL);
 diff_time = now-start;
 if (diff_time >= 30.0)
 {
    terminated = 0;
 }
 for(int j = 500000; j>=0; j--){
   a *= a*b*c;
   b *= a*b/c;
   c /= a/b/c;
   a /= a*b/c;
   b /= a/b/c;
   c /= a*b*c;
   a *= a*b*c;
   a *= a*b*c;
   a *= a*b*c;
   a *= a*b*c;
   b *= a*b/c;
   b *= a*b/c;
 }
}
return 0 ;
}
