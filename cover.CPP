#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<screen2.cpp>
void pass();
int p=0,q,x;
  int maxx=getmaxx();
  int i;
  int maxy=getmaxy();
   char username[25];
   char password[25];
 void main()
 {
  initgraph(&p,&q,"..\\bgi");
      setbkcolor(WHITE);
      int midx=getmaxx()/2;
      int midy=getmaxy()/2;
	randomize();
	for(i=0;i<=400;i++)
	{
		setcolor(random(5));
		rectangle(midx-i,midy-i,midx+i,midy+i);
		delay(10);
	}
	cleardevice();
	setbkcolor(LIGHTRED);
	for(i=400;i>=0;i--)
	{
		setcolor(random(5));
		rectangle(midx-i,midy-i,midx+i,midy+i);
		delay(10);
	}
	cleardevice();
		 pass();
getch();
}
void pass()
{
 setbkcolor(LIGHTBLUE);
   setcolor(WHITE);
   rectangle(638,475,maxx+2,maxy);
    setfillstyle(9,GREEN);
    setcolor(WHITE);
    bar3d(150,92,550,30,8,8);
   setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(120,30,"**THE PLATINUM ERA**");
   setcolor(BLUE);
   settextstyle(7,0,1.5);
   outtextxy(120,195,"USERNAME:");
   outtextxy(125,280,"PASSWORD:");
   setcolor(BLUE);
   setfillstyle(9,LIGHTRED);
   bar3d(250,180,395,230,0,0);
   setcolor(BLUE);
   bar3d(250,270,395,320,0,0);
   setcolor(YELLOW);
      arc(60,35,200,340,45);
   circle(60,95,14);
   circle(60,120,9);
   circle(18,45,5);
   circle(102,45,5);
	gotoxy(34,13);
    setcolor(YELLOW);
    arc(65,35,200,340,45);
   circle(65,95,14);
   circle(65,120,9);
   circle(23,45,5);
   circle(105,45,5);
   setfillstyle(1,LIGHTGREEN);
   fillellipse(63,95,6,12);
    setfillstyle(1,MAGENTA);
   fillellipse(63,98,4,8);
    setfillstyle(1,RED);
   fillellipse(63,121,4,7);
    setfillstyle(1,LIGHTBLUE);
   fillellipse(63,124,2,4);

	gotoxy(34,13);

	gotoxy(34,13);
	char match[15];
	 x,i=0;
	while((x=getch())!=13 && i<=10)
	{     	username[i++]=(char)x;
		cout<<(char)x;
	}
	username[i]='\0';
	gotoxy(34,19);
	char match2[15];
	i=0;
	while((x=getch())!=13 && i<=10)
	{
		password[i++]=(char)x;
		cout<<"*";
	}
	password[i]='\0';
	gotoxy(37,22);
	fstream  f;
	f.open("login.txt",ios::in);
	i=0;
	while(f>>match)
	{f>>match2;

	if(strcmpi(username,match)==0)
	    {   if(strcmpi(password,match2)==0)
	    i=2;
	    else
	    {
	    i=1;
	    }
	    }
	    }
	    if(i==2)
	    {
		cout<<"CONGRATZ- $$ ACCESS GRANTED $$";
		delay(2000);
		screen2();
	    }

	else
	      {
		cout<<"ACCESS DENIED!!!-RE ENTER THE DETAILS";
		
		delay(2000);
		pass();
	      }
		
      }




