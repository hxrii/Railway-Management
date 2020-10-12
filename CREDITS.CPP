
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{clrscr();
int gd=DETECT,gm;int i,j;
initgraph(&gd,&gm,"C:\\TC\\BGI");
delay(2000);
settextstyle(0,HORIZ_DIR,(5/2));
setcolor(WHITE);
outtextxy(140,220,"credits...");
settextstyle(0,HORIZ_DIR,4);
delay(500);
setcolor(6);
outtextxy(180,260,"->MANU MOHAN");
delay(500);
setcolor(WHITE);
outtextxy(180,300,"->W   D ");
setcolor(9);
outtextxy(180,300,"   IVI  ");
delay(500);
setcolor(WHITE);
outtextxy(180,340,"->H  .CM.JR.");
setcolor(9);
outtextxy(180,340,"   ARI ");
delay(500);
setcolor(GREEN);
outtextxy(180,380,"->SANJU ");
for(i=0;i<360;i++)
{delay(5);
if(i<=180)
setcolor(6);
else if(i>180 && i<=280)
setcolor(WHITE);
else if(i>280 && i<=360)
setcolor(GREEN);
arc(300,240,0,i,i);
}

getch();
}
