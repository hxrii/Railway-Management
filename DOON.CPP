
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<time.h>
#include<iomanip.h>
#include<fstream.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

void logo()
{clrscr();
 float k;
int i,j,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI") ;

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
}

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
}

void alphaload()
{
clrscr();
int i,gd=DETECT,gm,a,b;
initgraph(&gd,&gm,"C:\\TC\\BGI");

setbkcolor(RED);
for(i=0;i<=690;i++)
{
delay(1);
setcolor(CYAN);
rectangle(i,370,i+15,450);
setcolor(YELLOW);
rectangle(i,370,i+5,450);
}
setbkcolor(RED);
setcolor(RED);
cleardevice();
}

int don=100,code=0;
char f[10]="f";
char s[10]="s";
int addr,ad,flag,f1,d,m,amt;
float tamt;

class login
{
public:
char id[100];
char pass[100],*password;
void getid();
void displayid();
};

void login::displayid()
{cout<<"\n\nID :";puts(id);
cout<<"Password :";puts(pass);
}

void login::getid()
{
cout<<"Enter your ID :\n";gets(id);
password=getpass("enter the password :");
strcpy(pass,password);
}

class detail
{
public:
int tno;
char tname[100];
char bp[100];
char dest[100];
int c1,c1fare;
int c2,c2fare;
int d,m,y;
void getdetail();
void dispdetail();
};
void detail::getdetail()
{
cout<<"enter the details\n";
cout<<"_________________\n\n";
cout<<"1.Train No :\n" ;
cin>>tno;
cout<<"\n2.Boarding Point :\n";
gets(bp);
cout<<"\n3.Destination Point :\n";
gets(dest);
cout<<"\nNo of seats in 1st class :";
cin>>c1;
cout<<"\n Fare (per ticket):\n";
cin>>c1fare;
cout<<"\n No of seats in 2nd class : ";
cin>>c2;
cout<<"\n Fare (per ticket):\n";
cin>>c2fare;
cout<<"Date of Travel :\n";
cin>>d>>m>>y;
}

void detail::dispdetail()
{


cout<<tno<<"  "<<bp<<"  "<<dest<<"\t"<<d<<"-"<<m<<"-"<<y<<"  "<<c1<<"\t  "<<c2<<"\t\t"<<c1fare<<"\t"<<c2fare<<"\n";


}
 class reser
 {
 public:
 int noss;
 int nosf;
 long pnr;
 int tno1;
 char ch;
 char bp[10];
 char dest[100];
 char pname[10][100];
 int age[20];
 char clas[10];
 int amount1,amount2;
 int nosr;
 int i;
 int d,m,y;
 int con;
 float amc;
 void getresdet();
 void displayres();
 reser()
 {noss=0;
  nosf=0;
  amount1=0;
  amount2=0;
  }
 };
 void reser::getresdet()
 {
  clrscr();
  cout<<"Enter details:\n";
  cout<<"______________\n";
  cout<<"1.Train no :\n\n";
  cin>>tno1;
  cout<<"2.Boarding point :\n\n";
  gets(bp);
  cout<<"3.Destination point :\n\n";
  gets(dest);
  cout<<"4.No of seats required :\n";
  cout<<"_________________________\n\n";
  cin>>nosr;
  for(i=0;i<nosr;i++)
  {
  cout<<"("<<(i+1)<<")."<<"Passenger name :\n\n";gets(pname[i]);
  cout<<"Passenger age :\n\n";cin>>age[i];
  cout<<"Enter class (f/s) :\n\n";
  gets(clas);
  if(strcmp(clas,f)==0)
  nosf++;
  if(strcmp(clas,s)==0)
  noss++;
  }
  cout<<"Date of travel :\n\n";
  cout<<"Day :\n";cin>>d;
  cout<<"Month :\n";cin>>m;
  cout<<"Year :\n";cin>>y;
   clrscr();
   }


   void reser::displayres()
   {cleardevice();
   cout<<"___________________________________________________\n";
   cout<<" PNR no :\t"<<pnr;
   cout<<"\nTrain No :\t"<<tno1;
   cout<<"\nBoarding point :\t";puts(bp);
   cout<<"\nDestination point :\t";puts(dest);
   cout<<"\nNo of 1st class seats reserved :\t"<<nosf;
   cout<<"\nNo of 2nd class seats reserved :\t"<<noss<<endl;
   for(i=0;i<nosr;i++)
   {
   cout<<"\nPassenger name:\t";puts(pname[i]);
   cout<<"Passenger age :\t"<<age[i];
   }
   cout<<"\nDate of Reservation :\t"<<d<<"-"<<m<<"-"<<y;

   cout<<"\nYou must pay :\t"<<"Rs. "<<amc<<" /-"<<" only"<<endl;

   }
   class canc
   {
   public :
   long pnr;
   int tno;
   char bp[10];
   char dest[100];
   char pname[10][100];
   int age[20];
   int i;
   char clas[10];
   int nosc;
   int d,m,y;
   float amr;
   void getcancdet();
   void displaycancdet();
   };
   void canc::displaycancdet()
   {clrscr();
    cout<<"_____________________________________________________\n\n";
    cout<< "PNR no :\t"<<pnr;
    cout<<"\nTrain no :\t"<<tno;
    cout<<"\nBoarding Point :\t";puts(bp);
    cout<<"\nDestination Point :\t";puts(dest);
    cout<<"\nYour class :\t";puts(clas);
    cout<<"\n No of seats to be cancelled :"<<nosc;
    for(i=0;i<nosc;i++)
    {
    cout<<i<<"Passenger name :\t";puts(pname[i]);
    cout<<"\nPassenger age :\t"<<age[i];
    }
    cout<<"\n Date of cancellation :\t"<<d<<"-"<<m<<"-"<<y;
    cout<<"\n You can collect :\t"<<"Rs. "<<amr<<" /-"<<endl;
    }
   void canc::getcancdet()
   {clrscr();
    cout<<"Enter Details :\n";
    cout<<"_______________\n";
    cout<<"1.PNR no :\n";cin>>pnr;

    cout<<"2.Date of cancellation :\n\n";
    cout<<" Day :\n";
    cin>>d;
    cout<<" Month :\n";
    cin>>m;
    cout<<" Year :\n";
    cin>>y;
    }
    void manage();
    void can();
    void user();
    void database();
    void res();
    void reserve();
    void displaypassdetail();
    void cancell();
    void enquiry();


    void main()
    {clrscr();

     logo();

    setbkcolor(RED);
    textcolor(RED);
    int ch1;
    do
   {
    clrscr();
    cout<<"________________________________________HOME_______________________________\n";
    cout<<"\n\n\n\t\t1.Admin Mode\t2.User Mode\t3.Exit\n\n";
    cin>>ch1;
    cout<<endl;
    switch(ch1)
    {
     case 1:
     database();
     break;
     case 2:
     user();
     break;
     case 3:
     alphaload();
     //crash();
     exit(0);




     default:cout<<"\n\nWrong Choice..";
     }
      }while(ch1<=3);
      getch();

     }

     void database()
     {
       char *password;
       char *pass="spectrum";
       password=getpass("Enter the administrator password :");

     detail a;
     fstream f;
     int ch2;
     char c;
     if(strcmp(pass,password)!=0)
     {
     cout<<"\nenter the password correctly...\n ";
     cout<<"You are not permitted to logon this mode!!!!\n";
     delay(2000);
     goto h;
     }
     else if(strcmp(pass,password)==0)
     { clrscr();
      char c;
     do
     {
      alphaload();
      clrscr();
      cleardevice();
      cout<<"____________________________________Admin Menu________________________________\n\n";
     cout<<"\n\n\t\t1. Create Date Base\n\n\t\t2.Add Details\n\n\t\t3.Display Details\n\n\t\t4.User Management\n\n\t\t5.Display Passenger Details\n\n\t\t6.Return to Main Menu \n\n";
     cin>>ch2;

     cout<<endl;
     switch(ch2)
     { case 1:
      cleardevice;
      alphaload();
      f.open("t.txt",ios::out|ios::binary);
      do
      {
      a.getdetail();
      f.write((char *) & a,sizeof(a));
      cout<<"Do you want to add one more record ? (y\n)\n";
      cin>>c;
      }
      while(c=='y'||c=='Y');
      f.close();
      break;
      case 2:
      cleardevice();
      alphaload();
      f.open("t.txt",ios::in|ios::binary|ios::app);
      a.getdetail();
      f.write((char *) & a,sizeof(a));
      f.close();
      break;
      case 3: //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   cleardevice();
    alphaload();
      f.open("t.txt",ios::in|ios::app|ios::binary);
      f.seekg(0);
      cout<<"tno\tBP\tDP \tDate\tSeats(F)  Seats(S)  Fare(F) Fare(S)\n";
      cout<<"___\t__\t__ \t____\t________  ________  _______ _______\n";

      while(f.read((char *) & a,sizeof(a)))
      {
	 a.dispdetail();
     getch();
      }
      f.close();
      break;
      case 4:
      cleardevice();
      alphaload();
      manage();
      break;
      case 5:
      cleardevice();
      displaypassdetail();
      break;
      } }
      while(ch2<=5);
      f.close();
      h:
      }}
      void reserve()
      {
      clrscr(); alphaload();
      int ch3;
      do
      {
      cout<<"\n\n\t\t1.Reserve\t\t2.Return to Main Menu\n\n";
      cin>>ch3;
      cout<<endl;
      switch(ch3)
      {case 1:
      res();
      break;
      }}
      while(ch3==1);
      }getch();

      void res()  // =eqw=fgewrwrgr3qqg2yr22q3y4jh4eweht4esj4yrj5rye
       {
      detail a;
      reser b;
      fstream f1,f2;
      f1.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
      f2.open("p.txt",ios::in|ios::out|ios::binary|ios::app);
      int ch;
      b.getresdet();
      while(f1.read((char *)&a,sizeof(a)));
      {
      if(a.tno==b.tno1)
      { //00000000000000000000000000000000000000000000000000000000000000000
      if(a.c1>=b.nosf)
      {
      b.amount1=a.c1fare*b.nosf;
      addr=f1.tellg();
      ad=sizeof(a.c1);
      f1.seekp(addr-(7*ad));
      a.c1=a.c1-b.nosr;
      f1.write((char *)& a.c1,sizeof(a.c1));
       f2.write((char *)& b,sizeof(b));
	    }
	     else
	     {cout<<"\n\n\t\t Sorry..Required Seats Not Available!!\n\n";
	    getch();
	    goto h; }

	   if(a.c2>=b.noss)
	   {
	   b.amount2=a.c2fare*b.noss;
	   addr=f1.tellg();
	   ad=sizeof(a.c2);
	   f1.seekp(addr-(5*ad));
	   a.c2=a.c2-b.nosr;
	   f1.write((char *)&a.c2,sizeof(a.c2));
	   f2.write((char *)& b,sizeof(b));
	    getch();
	    clrscr();
	      }
	       else
	       {
	       cout<<"\n___Sorry..Required No of Seats not Available!_____\n";
	   getch();
	   goto h;  }
	      b.amc=b.amount1+b.amount2;
		randomize();
		b.pnr=1000+random(don);
		don++;
		b.displayres();
	       cout<<"\n\n\n\n\n\t\t __________________________ \n";
	       cout<<"\t\t |Your Ticket is Reserved..| \n";
	       cout<<"\t\t___________________________\n\n";

	       getch();
	      clrscr();
	      alphaload();
	       goto h;
	       }
	       else
	       {
	       flag=0;
	       }}
	       if(flag==0)
	       { clrscr();
		 cout<<"\n\n\n\n\n\t _____________________ \n";
		       cout<<"\t |Wrong Train Number..| \n";
		       cout<<"\t _____________________\n\n";

	      cout<<"\n\nEnter train no from database..\n\n";
	    getch();
	    goto h;
	     }
	      f1.close();
	      f2.close();
	      getch();
	     h: }
	      void displaypassdetail()
	      {cleardevice();
	      clrscr();
	      fstream f1;
	      reser b;
	      if(!f1)
	      f1.open("p.txt",ios::in|ios::out|ios::binary|ios::app);
	      f1.seekg(0);
	      while(f1.read((char *)&b,sizeof(b)));
	      {
	      alphaload();//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	      b.displayres();//tttttttttttttttttttttaaaaaaaaaaatttttttttttttt
	      getch();
	      }
	      getch();
	      f1.close();

	      }
	      void enquiry()
	      {clrscr();
	      fstream f;
	      f.open("t.txt",ios::in|ios::out|ios::binary);
	      detail a;
	      while(f.read((char *)&a,sizeof(a)))
	      {
	      a.dispdetail();
	      }
	      getch();
	      }
	    void cancell()
	    {
	      detail a; //222222222222222222222222222222222222222222222222
	      reser b;
	      canc c;
	      fstream f1,f2,f3;
	      f1.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
	      f2.open("p.txt",ios::in|ios::out|ios::binary||ios::app);
	      f3.open("cn.txt",ios::in|ios::out|ios::binary||ios::app);
	      clrscr();
	      alphaload();

	      cout<<" _______________________________CANCELLATION___________________________\n\n\n";

	      c.getcancdet();//11111111111111111111111111111111111111111111111111
	      while(f2.read((char *)& b,sizeof(b)))
	      {
	      if(c.pnr==b.pnr)
	      { code=2;
	      c.tno=b.tno1;
	      strcpy(c.bp,b.bp);
	      strcpy(c.dest,b.dest);
	      c.nosc=b.nosr;
	      for(int j=0;j<c.nosc;j++)
	      {
	      strcpy(c.pname[j],b.pname[j]);
	      c.age[j]=b.age[j];
	      }
	      strcpy(b.clas,c.clas);
	      if(strcmp(c.clas,f)==0)
	      {
	      while(f1.read((char *)&a,sizeof(a)))
	      {
	      a.c1=a.c1+c.nosc;
	      addr=f1.tellg();
	      ad=sizeof(a.c1);
	      f1.seekp(addr-(7*ad));
	      f1.write((char *)& a.c1,sizeof(a.c1));
	      c.amr=b.amc;
	       if((c.y==a.y)&&(c.m==a.m)&&(c.d>=a.d))
	      {
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	    getch();
	    code=1;  }
	      else if((c.y==a.y)&&(c.m>=a.m))
		{
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	     getch();
	     code=1; }
	     else if((c.y>=a.y))
	       {
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	  getch();
	  code=1;  }
	     else
	      {c.displaycancdet();
	      }
	     }
	    }

	      else if(strcmp(c.clas,s)==0)
	      {
	      while(f1.read((char *)&a,sizeof(a)))
	      {
	      a.c2=a.c2+c.nosc;
	      addr=f1.tellg();
	      ad=sizeof(a.c2);
	      f1.seekp(addr=(5*ad));
	      f1.write((char *)&a.c2,sizeof(a.c2));
	      c.amr=b.amc;
	      if((c.y==a.y)&&(c.m==a.m)&&(c.d>=a.d))
	      {
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	    getch();
	    code=1;  }
	      else if((c.y==a.y)&&(c.m>=a.m))
		{
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	    getch();
	    code=1;  }
	     else if((c.y>=a.y))
	       {
	      cout<<"Cancelling after the departure\n";
	      cout<<"Your request cannot be completed\n";
	     getch();
	     code=1; }
	     else
	      {c.displaycancdet();
	       }
	      }
	     }
	   }
	     else
	      {
	      flag=0;
	      }
	     }
	      if(flag==0)
	      {
	      cout<<"Enter the correct PNR no\n";
	     getch();
	     code=1; }
	      f1.close();
	      f2.close();
	      f3.close();
	      getch();
	      if(code==1)
	      goto l;

	   l:   }

	      void can()
	      {
	      int ch5;
	      do
	      {
	      cout<<"__________________________________CANCELLATION___________________________\n\n";
	      cout<<"\n\n\n\t1.Cancel\t\t2.Return to Main Menu\n\n";
	      cin>>ch5;
	      cout<<endl;
	      switch(ch5)
	      {
	      case 1:
	      cancell();
	      break;
	      }
	      }
	      while(ch5==1);
	      getch();
	      }
	      void user()
	      {
	      login a;
	      int ch0,c;
	      clrscr();alphaload();
	      cout<<"________________________________________USER MENU______________________________\n\n\n";

	       char *password;
       fstream f;
       f.open("id.txt",ios::in|ios::out|ios::binary);
       char id[100];
     int i3;
     puts("Enter your id :");
     cout<<"\n";gets(id);
     password= getpass("Enter Your Password ");

      while(f.read((char *) & a,sizeof(a)))
      {
      if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
      {
      do
      {clrscr();

      cout<<"\n\n\n\t\t1.Reserve\t\t2.Cancel\n";
      cout<<"\t\t3.Enquiry\t\t4.Return to Main Menu\n\n\n";
      cin>>ch0;
      cout<<endl;
      switch(ch0)
      {
       case 1:
       clrscr();
       reserve();
       break;
       case 2:
       clrscr();
       can();
       break;
       case 3:
       clrscr();
       enquiry();
       break;
       case 4:
       c=0;
       break;
       }
       }
       while(ch0<=3);

       }
       else
       {d=1;
      }
      if(c==0)
      {d=0;}

       }
       if(d==1)
       {
       cout<<"\nEnter your user id and password correctly\n\n";
       }
       delay(1000);

       }
       void manage()
       {
       int ch9;
       fstream f;
       char c;

       login a;
       clrscr();

       cout<<"_____________________________USER MANAGEMENT____________________________\n\n\n";
       do
       {clrscr();
       cout<<"\n\t\t1.Create id data base\t\t2.Add details\n\n";
       cout<<"\t\t 3.Display details\t\t4.Return to Main Menu\n\n\n";
       cin>>ch9;
       cout<<endl;
       switch(ch9)
       {
       case 1:
       f.open("id.txt",ios::out|ios::binary);
       do
       {clrscr();
       a.getid();
       f.write((char *)&a,sizeof(a));
       cout<<"Do you want to add one more record? (y/n)\n\n";
       cin>>c;
       }
       while(c=='y'||c=='Y');
       f.close();
       break;
       case 2:
       clrscr();
       f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
       a.getid();
       f.write((char *)&a,sizeof(a));
       f.close();
       break;
       case 3:
       clrscr();
       f.open("id.txt",ios::in|ios::out|ios::binary);
       f.seekg(0);
       while(f.read((char *)&a,sizeof(a)))
       {
       a.displayid();
       }
	f.close();
       getch();
       break;
       case 4:
       clrscr();
       }
       }
       while(ch9<=3);
       getch();
       }

