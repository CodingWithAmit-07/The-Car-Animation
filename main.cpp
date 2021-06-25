#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(void)
{
clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:/tc/bgi");
setcolor (CYAN);
for (int i=0;i<350;i++)
{
//Road
line(0,386,645,386);
//Car Body
line(100+i,300,230+i,300);
line(100+i,300,75+i,330);
line(230+i,300,255+i,330);
line(75+i,330,75+i,360);
line(75+i,360,105+i,360);
line(150+i,360,175+i,360);
line(255+i,330,255+i,360);
line(225+i,360,255+i,360);
//tyre
circle(130+i,360,22);
circle(200+i,360,22);
delay(50);
cleardevice();
}
getch();
closegraph();
return 0;
}
