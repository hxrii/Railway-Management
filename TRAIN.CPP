#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<math.h>

void main()
{clrscr();
int k1,j,i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

for(j=0;j<50;j++)
for(int t=0;t<190;t++)
{for(j=0;j<50;j++)
{setcolor(11);
 if(j>=0&&j<=30)
 setcolor(WHITE);
 if(j>=40&&j<=50)
 setcolor(CYAN);
 arc(250,250,-t,t,j);
 }
}  delay(100);

 for(i=0;i<=30;i++)
{  setcolor(11);
  if(i>=25)
 setcolor(CYAN);
 if(i>5&&i<=20)
 setcolor(BLACK);
  if(i>=10&&i<=15)
 setcolor(WHITE);
 circle(250,250,i+80);

delay(10);
}

 for(int q=0;q<=90;q++)
{ for(int l=50;l<55;l++)
 {setcolor(WHITE);
 arc(250,250,0,q,l);
 arc(250,250,180,180+q,l);
}
}
//setbkcolor(11);
//delay(100);
setcolor(BLACK);
for(int u=0;u<=90;u++)
{for(int o=80;o<115;o++)
{if(u<=21)
 arc(250,250,-u,u,o);
 else
 arc(250,250,0,u,o);
}
//delay(1);
}
/*setcolor(BLACK);
for(u=180;u<=270;u++)
{for(int o=80;o<115;o++)
{arc(250,250,u,180,o);
}
delay(5);
} */
/*int x,y;
 for(float k=0;k<=300;k++)
   {delay(2);
    setcolor(WHITE);
     for(int m=0;m<5;m++)
    {  x=250+cos(k)*120;
       y=250+sin(k)*120;
       circle(x,y,m);
      }
    }
    for(t=0;t<10;t++)
    {
     setcolor(11);
     arc(250,250,-20,90,t+115);
     } */
/*setbkcolor(WHITE);
delay(100);
setbkcolor(CYAN);
delay(100);
setbkcolor(BLACK);
*/
settextstyle(10,HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(255,130,"S");
delay(250);
outtextxy(285,140,"T");
delay(250);
outtextxy(310,160,"A");
delay(250);
outtextxy(333,200,"R");
delay(250);
outtextxy(335,240,"K");
delay(150);
for(int h=0;h<=1;h++)
{delay(50);
setcolor(YELLOW);
if(h==1)
{setcolor(CYAN);
 delay(50);
 }
outtextxy(255,130,"S");
outtextxy(285,140,"T");
outtextxy(310,160,"A");
outtextxy(333,200,"R");
outtextxy(335,240,"K");
}  delay(1000);
cleardevice();

for(k1=0;k1<=2;k1++)
{setcolor(7);
rectangle(0,310,640,310+k1);
}
for(i=-400;i<=600;i++)
{for(j=1;j<=10;j++)
{
setcolor(j);
settextstyle(4,HORIZ_DIR,6);
outtextxy(180,150,"LOADING...");
setcolor(9);
circle(500+i,305,j/2);
rectangle(100+i,310-j,500+i,310);
setcolor(BLACK);
rectangle(-300,310-j,99+i,310);
}
}delay(500);
/*for(i=0;i<=640;i++)
{setcolor(BLACK);
rectangle(0,310,i,312);
delay(5);
}*/


getch();
}

