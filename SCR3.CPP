#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<stark11.cpp>
#include<stark12.cpp>
#include<stark13.cpp>
#include<stark14.cpp>
void scr3()
{
 int g=0,d,ch;
 int midx;
   int points1[]={420,270,440,270,430,290,420,270};
   int points2[]={430,290,400,360,460,360,430,290};
   initgraph(&g,&d,"..\\bgi");
   midx=getmaxx()/2;
   setfillstyle(6,LIGHTRED);
   bar3d(0,midx-65,637,250,0, 0);
   setfillstyle(6,LIGHTRED);
   bar3d(0,421,637,425,0, 0);
   setfillstyle(6,CYAN);
   bar3d(midx+7,0,330,421,0,0);
   setcolor(YELLOW);
   setlinestyle(0,1,3);
   arc(150,50,200,340,70);
   setlinestyle(0,1,1);
   setcolor(LIGHTBLUE);
   circle(150,140,20);
   setcolor(LIGHTRED);
   for (int i = 1; i < 2; i++)
  {
      setfillstyle(i, LIGHTRED);
      fillellipse(150, 140, 10,20);
   }
 for (i = 1; i < 2; i++)
 {
   setfillstyle(i,LIGHTGREEN);
   fillellipse(150, 173, 5, 10);
 }
      setcolor(LIGHTBLUE);
      circle(150,173,12);
      setcolor(YELLOW);
      circle(215,65,10);
      circle(85,64,10);
      setcolor(LIGHTBLUE);
      setfillstyle(10,LIGHTBLUE);
      bar3d(70,248,250,220,0,0);
      setcolor(RED);
      settextstyle(7,0,1);
      outtextxy(90,220 ,"1.NECKLACES");
      setcolor(YELLOW);
      setlinestyle(0,1,1);
      circle(490,135,30);
      circle(490,130,35);
      setlinestyle(0,1,1);
      setfillstyle(1,RED);
      fillellipse(490,105,12.5,25);
      setcolor(LIGHTBLUE);
      setfillstyle(10,LIGHTBLUE);
      bar3d(570,248,400,220,0,0);
      setcolor(RED);
      settextstyle(7,0,1);
      outtextxy(450,220,"2.RINGS");
      setcolor(LIGHTGREEN);
      settextstyle(7,0,1);
      outtextxy(5,450,"ENTER YOUR CHOICE:");
      setcolor(YELLOW);
      circle(120,292,8);
      circle(120,328,8);
      setcolor(WHITE);
      circle(120,365,8);
      setfillstyle(9,LIGHTBLUE);
      bar(130,300,110,320);
      bar(130,357,110,336);
      setcolor(WHITE);
      circle(123,292,8);
      circle(123,328,8);
      setfillstyle(1,LIGHTGREEN);
      fillellipse(120,372,3,6);
      setfillstyle(1,LIGHTRED);
      setcolor(YELLOW);
      circle(147,292,8);
      circle(147,328,8);
      setcolor(WHITE);
      circle(150,365,8);
      setfillstyle(9,LIGHTBLUE);
      bar(140,300,160,320);
      bar(140,336,160,357);
      setcolor(WHITE);
      circle(150,292,8);
      circle(150,328,8);
      setfillstyle(1,LIGHTGREEN);
      fillellipse(150,372,3,6);
      setcolor(LIGHTBLUE);
      setfillstyle(10,LIGHTBLUE);
      bar3d(70,389,250,420,0,0);
      setcolor(RED);
      settextstyle(7,0,1);
      outtextxy(95,390,"3.EAR-RINGS");
      setcolor(LIGHTBLUE);
      setfillstyle(10,LIGHTBLUE);
      bar3d(570,390,400,420,0,0);
      setcolor(RED);
      settextstyle(7,0,1);
      outtextxy(425,390,"4.LOCKETS");
      setcolor(YELLOW);
      drawpoly(4,points1);
      setfillstyle(10,YELLOW);
      fillpoly(4,points2);
      line(430,290,430,360);
      line(400,360,430,340);
      line(460,360,430,340);
      setfillstyle(9,BROWN);
      fillellipse(430,335,16,16);
      gotoxy(30,29);
      cin>>ch;
      switch(ch)               //switch case
      {
        case 1:stark11();
	 getch();
	 break;
      case 2:stark12();
                 getch();
                 break;
      case 3:stark13();
                 getch();
                 break;
      case 4:stark14();
                 getch();
                 break;
      default:cout<<"invalid choice";
    }//switch
       getch();
       closegraph();
 }
