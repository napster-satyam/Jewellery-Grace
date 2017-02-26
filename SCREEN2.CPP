#include<iostream.h>
#include<string.h>
#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<details.cpp>
#include<scr3.cpp>
void screen2()
{
   int x,zx,fg,kg;
   int g=0,d;
   initgraph(&g,&d,"..\\bgi");
   setbkcolor(BLACK);
   setcolor(CYAN);
   line(0,210,640,210);
   line(320,0,320,400);
   line(0,400,640,400);
   setcolor(YELLOW);
   settextstyle(4,0,9);
   outtextxy(30,5,"1");
   setcolor(RED);
   settextstyle(8,0,5);
   outtextxy(55,105,"JEWELLERY");
   setcolor(YELLOW);
   settextstyle(4,0,9);
   outtextxy(345,5,"2");
   setcolor(RED);
   settextstyle(8,0,5);
   outtextxy(355,105,"EMPLOYEE");
   setcolor(YELLOW);
   settextstyle(4,0,9);
   outtextxy(30,200,"3");
   setcolor(RED);
   settextstyle(8,0,5);
   outtextxy(20,295,"TRANSACTION");
   setcolor(YELLOW);
   settextstyle(4,0,9);
   outtextxy(345,200,"4");
   setcolor(RED);
   settextstyle(8,0,5);
   outtextxy(355,295,"REPORTS");
   setcolor(YELLOW);
   settextstyle(4,0,5);
   outtextxy(395,400,"5");
   setcolor(RED);
   settextstyle(8,0,5);
   outtextxy(430,396,"EXIT");
   setcolor(CYAN);
   line(380,401,380,450);
   line(380,450,640,450);
   gotoxy(5,27);
   cout<<"ENTER YOUR CHOICE"<<endl;
   gotoxy(5,29);
   cin>>x;
   switch(x)
   {
    case 1:  scr3();  //function to call screen 3
		getch();
		break;
    case 2:cleardevice();
	       setbkcolor(BLACK);
	       setcolor(WHITE);
	       gotoxy(30,5);
	       cout<<"*******EMPLOYEE*******"<<endl;
	       cout<<"1-enter employee details"<<endl;
	       cout<<"2-show employee details"<<endl;
	       cout<<"Enter your choice"<<endl;
	       cin>>zx;
	       if(zx==1)
	 {
	     enter_emp_det();
		  //calling function to enter employee details
	   }
	 else if(zx==2)
	   {
	     show_emp_det();      //calling function to show employee details

	   }
	   else if(zx==27)
	   {
		exit(1);
	   }
	   else cout<<"invalid choice";
	   screen2();

     case 3:cleardevice();
	       setbkcolor(BLACK);
	       setcolor(WHITE);
	  gotoxy(30,5);
	    cout<<"******TRANSACTIONS******"<<endl;
	    cout<<"1-Purchases"<<endl;
	    cout<<"2-Sales"<<endl;
	    cout<<"Enter your choice"<<endl;
	    cin>>fg;
	    if(fg==1)
	   {
	     ent_purchase();         //calling function to enter purchase details
	     getch();
	   }
	   else if(fg==2)
	   {
	      enter_c_det();           //calling function to enter customer details
	      getch();
	   }
	   else if(fg==27)
	       exit(1);
		else cout<<"invalid choice";
	    break;
     case 4:   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(WHITE);
	  gotoxy(30,5);
	    cout<<"*******REPORTS*******"<<endl;
	    cout<< "1-Purchase Reports"<<endl;
	    cout<<"2_Sales Reports"<<endl;
	    cout<<"Enter your choice"<<endl;
	    cin>>kg;
	    if(kg==1)
	   {
	     show_purchase();      //calling function to enter purchase details
	     getch();
	   }
	   else if(kg==2)
	   {
	     show_c_det();              //calling function to show customer details
	      getch();
	   }
	   else if(kg==27)
	    exit(1);
		 else cout<<"invalid choice";

     case 5:exit(1);
     }
   getch();
}
