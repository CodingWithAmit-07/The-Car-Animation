#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(void)
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:/tc/bgi");
setcolor(YELLOW);
for (int i=0;i<350;i++)
{
rectangle(100+i,100,200+i,200);
delay(20);
cleardevice();
}
getch();
closegraph();
return 0;
}