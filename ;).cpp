#include <stdio.h>
#include <graphics.h>
int main()
{
   int gdriver = 9; 
   int gmode = 2; 
   initgraph(&gdriver, &gmode,"C:\\TC\\BGI"); 
   setbkcolor(14); 
   setcolor(1); 
   cleardevice(); 
   circle(60,50,30);
   circle(50,40,10);
   circle(70,40,10);
   rectangle(50,70,70,70);
   return 0; 
} 




