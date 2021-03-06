/*********************************************************************/
/*                                                                   */
/*          2nd Semester Object-Oriented Programming Project.        */
/*          			Author: Hamid Rahman                         */
/*********************************************************************/

#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>


/****************************Class Declaration*****************/
class mcq
	{
	 private:           		        //Private data...
		int tick,ghalat,tcount,mcq_no,unsolved;
		char option;
	public:              		        //Public data...
		mcq():tick(0),ghalat(0),tcount(0),mcq_no(1),unsolved(0){}       //Constructor...
		void data();                   	//Prototype of function data.
		void welcome();                	//Prototype...
		void medical();                 //Prototype...
		void engg();                    //Prototype...
		void result();			//Prototype of function result.
		void frame();                   //Prototype...
		void wait();                    //Prototype...
		void guidmenu();                //Prototype...
		void button(int);
		void hitbtn(int,int);
	};
/********************END OF mcq CLCASS **********************/

/********************!username CLASS!***********************/
class username
	{
	  private:
	       char name[20];
	  public:
	      void  yourname();		//Prototype...
	      void  showname(); 	//Prototype...
	      void instruction();       //Prototype...
	      void mcqtrick();          //Prototype...
	      void logo();              //Prototype...
	      void logo1();             //Prototype...
	};
/*****************END OF username CLASS*************************/
/***************************************************************/
/*******************End of Class declaration********************/
/***************************************************************/

/*********************Main BODY ********************************/

void main()
	 { /*****Graphics initialization**************/
	       int gd=DETECT,gm;
	       char opt;
	       initgraph(&gd,&gm,"..\\bgi");
	   /*****************************************/
		  setbkcolor(BLUE);
		  mcq test;         //OBJECT of CLASS...mcq...
		  username one;     //OBJECT OF CLASS ...username...

		  cleardevice();    //function called....

		  test.welcome();
		  one.logo();
		  one.yourname();
		  one.logo1();
		  while(1)    //LOOP FOR MAIN MENU...
		  {
			cleardevice();
			one.instruction();

			kbhit();
			opt=getch();
			switch (opt)
				{
					case 'M':
					case 'm':{
						test.medical();
						test.wait();
						one.showname();
						test.result();
						break;}
					case 'E':
					case 'e':{
						test.engg();
						test.wait();
						one.showname();
						test.result();
						break;}
					case 'C':
					case 'c':{
						test.data();
						test.wait();
						one.showname();
						test.result();
						break;}
					case 'T':
					case 't':{
						one.mcqtrick();
						break;}
					case 27:{
						exit(0);
						break;
						}
				}
			  getcolor();
			  getch();
		  }
	 }
/****************End Of Main Body******************************/
/**************************************************************/
/****************Class's Functions Definitions*****************/

void username::logo()
	{
		sleep(2);   //function called.
		int loop=1;
		for(loop;loop<=60;loop++)   //loop for random color logo ...
			{
				if(loop==10)
				setcolor(RED);
				if(loop==20)
				setcolor(YELLOW);
				if(loop==30)
				setcolor(MAGENTA);
				if(loop==40)
				setcolor(WHITE);
				if(loop==50)
				setcolor(GREEN);
				circle(280,330,5+loop);
				delay(50);
			}
	}
void username::logo1()
	{
	      int loop=1;
	      for(loop;loop<=60;loop++)     //loop for black logo ...
			{
				setcolor(BLACK);
				circle(280,330,5+loop);
				delay(50);
			}
	       setcolor(RED);    //red color for mcq's rectangle
	}
void mcq::guidmenu()
	{
		rectangle(420,150,625,350);
		gotoxy(55,11);
		cout<<"  GUIDE LINES";
		gotoxy(55,12);
		cout<<"1:Press A for option A.";
		gotoxy(55,13);
		cout<<"2:Press B for option B.";
		gotoxy(55,14);
		cout<<"3:Press C for option C.";
		gotoxy(55,15);
		cout<<"4:Press D for option D.";
		gotoxy(55,16);
		cout<<"5:If you want to leave";
		gotoxy(55,17);
		cout<<" an mcq then PRESS any";
		gotoxy(55,18);
		cout<<" key except A,B,C and D.";

	}
void username::mcqtrick()
	{
	     char nxtpg;
	     cleardevice();
	     settextstyle(1,0,3);
	     outtextxy(150,40,"MCQs TRICKS");
	     rectangle(80,100,450,400);
	     gotoxy(23,8);
	     cout<<"This is mcqs tricks";
	     gotoxy(13,25);
	     cout<<"PRESS ANY KEY TO MOVE TO NEXT PAGE.";
	     while(!kbhit());
	     kbhit();
	     nxtpg=getch();
	     if(nxtpg)
	      {
		cleardevice();
		outtextxy(150,40,"MCQs TRICKS");
		rectangle(80,100,450,400);
		gotoxy(23,8);
		cout<<"This is mcqs tricks";
		gotoxy(13,25);
		cout<<"PRESS ANY KEY TO RETURN TO MAIN MENU.";
		while(!kbhit());
	      }


	}

void mcq::welcome()
	{
		sleep(2);
		settextstyle(1,0,3);
		outtextxy(80,110,"WELCOME TO ENTRANCE TEST EXAM");
	}

void mcq::frame()
	{
	      rectangle(80,150,400,290);

	}
void mcq::wait()
	{
		int inlop;
		char a=1;
		cleardevice();
		frame();
		outtextxy(150,120,"RESULT");
		gotoxy(20,11);
		for(inlop=0;inlop<=8;inlop++)
			{
				delay(30);
				cout<<a<<"  ";
			 }
		gotoxy(20,12);
		for(inlop=0;inlop<=8;inlop++)
			{
				delay(30);
				cout<<"  "<<a;
			}
		gotoxy(20,13);
		for(inlop=0;inlop<=8;inlop++)
			{
				delay(30);
				cout<<a<<"  ";
			}
		gotoxy(20,14);
		for(inlop=0;inlop<=8;inlop++)
			{
				delay(30);
				cout<<"  "<<a;
			}
		gotoxy(20,15);
		for(inlop=0;inlop<=8;inlop++)
			{
				delay(30);
				cout<<a<<"  ";
			}
	}

void mcq::result()           //mcq class function...
	{

		outtextxy(150,120,"RESULT");
		rectangle(150,150,420,290);
		gotoxy(20,12);
		cout<<"Your Marks is "<<tick-ghalat<<endl;
		gotoxy(20,13);
		cout<<"You made  "<<ghalat<<"   mcq(s) Wrong."<<endl;
		gotoxy(20,14);
		cout<<"You made  "<<tcount<<"   mcq(s) Correct."<<endl;
		gotoxy(20,15);
		cout<<"You made  "<<unsolved<<"   mcq(s) Unsolved.";
		gotoxy(20,17);
		cout<<"Press any KEY to RETURN To";
		gotoxy(20,18);
		cout<<"INSTRUCTION MENU";
		tick=0;
		ghalat=0;
		tcount=0;
		mcq_no=1;
		unsolved=0;
	}
void username::instruction()  //Main menu ..
	{
	  rectangle(150,150,420,260);
	  settextstyle(1,0,3);
	  outtextxy(150,120,"INSTRUCTIONS");
	  gotoxy(20,11);
	  cout<<"Press M for Medical test"<<endl;
	  gotoxy(20,12);
	  cout<<"Press E for Engineering test";
	  gotoxy(20,13);
	  cout<<"Press C for Computer science test";
	  gotoxy(20,14);
	  cout<<"Press T for MCQs Tricks";
	  gotoxy(20,16);
	  cout<<"Press ESC to exit from the TEST";
	}
void username::yourname()   //username class function...
	{
		rectangle(150,150,420,260);
		gotoxy(20,11);
		puts("YOUR NAME :");    //puts is stdio function, it outputs a string...
		gotoxy(20,12);
		gets(name);                   //gets is stdio function, it gets a string...
	}
void username::showname()    //username class function...
       {
		cleardevice();
		gotoxy(20,11);
		puts(name);
       }
void mcq::button(int a)
	{
		setfillstyle(1,WHITE);
		setcolor(WHITE);
		pieslice(90,233+a,0,360,5);
		setcolor(RED);
	}
void mcq::hitbtn(int optn,int check)
	{  if(check==tick)
	  {
	     setfillstyle(1,GREEN);
	     setcolor(GREEN);
	     pieslice(90,233+optn,0,360,6);
	     setcolor(RED);
	     sound(500);
	     delay(150);
	     nosound();
	  }
	   if(check==ghalat)
	   {
	     setfillstyle(1,RED);
	     setcolor(RED);
	     pieslice(90,233+optn,0,360,6);
	     setcolor(RED);
	     sound(300);
	     delay(150);
	     nosound();
	   }
	}

void mcq::data()//These function is for Mcqs....
	{
		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		guidmenu();
		button(0);
		gotoxy(12,11);
		cout<<"What is programming?"<<endl;
		gotoxy(13,15);
		button(16);
		cout<<"  A. Fun";
		gotoxy(13,16);
		button(32);
		cout<<"  B. Logic"<<endl;
		gotoxy(13,17);
		cout<<"  C. Nothing";
		gotoxy(13,18);
		button(48);
		cout<<"  D. Tedious work"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {

			    tick=tick+4;
			    hitbtn(0,tick);
			    tcount++;
			    break;}
		case 'B':
		case 'b': {

			    ghalat++;
			    hitbtn(16,ghalat);
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			   unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(12,11);
		cout<<"Human lacks ... "<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. Brain";
		button(16);
		gotoxy(13,16);
		cout<<"  B. Feather";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Hand";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Ear"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {
			    ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			    tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(13,11);
		cout<<"How many legs have you?"<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. 3";
		button(16);
		gotoxy(14,16);
		cout<<"  B. 4";
		button(32);
		gotoxy(13,17);
		cout<<"  C. 2";
		button(48);
		gotoxy(13,18);
		cout<<"  D. 0";

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {ghalat++;
			   hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			   hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		guidmenu();
		button(0);
		gotoxy(12,11);
		cout<<"What is programming?"<<endl;
		gotoxy(13,15);
		button(16);
		cout<<"  A. Fun";
		gotoxy(13,16);
		button(32);
		cout<<"  B. Logic"<<endl;
		gotoxy(13,17);
		cout<<"  C. Nothing";
		gotoxy(13,18);
		button(48);
		cout<<"  D. Tedious work"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {

			    tick=tick+4;
			    hitbtn(0,tick);
			    tcount++;
			    break;}
		case 'B':
		case 'b': {

			    ghalat++;
			    hitbtn(16,ghalat);
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			   unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(12,11);
		cout<<"Human lacks ... "<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. Brain";
		button(16);
		gotoxy(13,16);
		cout<<"  B. Feather";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Hand";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Ear"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {
			    ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			    tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(13,11);
		cout<<"How many legs have you?"<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. 3";
		button(16);
		gotoxy(14,16);
		cout<<"  B. 4";
		button(32);
		gotoxy(13,17);
		cout<<"  C. 2";
		button(48);
		gotoxy(13,18);
		cout<<"  D. 0";

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {ghalat++;
			   hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			   hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

	}
void mcq::medical()
	{
	  gotoxy(20,11);

		cleardevice();
		frame();
		guidmenu();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		gotoxy(11,12);
		cout<<"This is Medical mcqs ?"<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. No";
		button(16);
		gotoxy(13,16);
		cout<<"  B. Yes";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Non ";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Both"<<endl;
		settextstyle(1,0,3);
		outtextxy(150,110,"MEDICAL TEST");

		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			   hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			unsolved++;
		}
		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		guidmenu();
		button(0);
		gotoxy(12,11);
		cout<<"What is programming?"<<endl;
		gotoxy(13,15);
		button(16);
		cout<<"  A. Fun";
		gotoxy(13,16);
		button(32);
		cout<<"  B. Logic"<<endl;
		gotoxy(13,17);
		cout<<"  C. Nothing";
		gotoxy(13,18);
		button(48);
		cout<<"  D. Tedious work"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {

			    tick=tick+4;
			    hitbtn(0,tick);
			    tcount++;
			    break;}
		case 'B':
		case 'b': {

			    ghalat++;
			    hitbtn(16,ghalat);
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			   unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(12,11);
		cout<<"Human lacks ... "<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. Brain";
		button(16);
		gotoxy(13,16);
		cout<<"  B. Feather";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Hand";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Ear"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {
			    ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			    tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(13,11);
		cout<<"How many legs have you?"<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. 3";
		button(16);
		gotoxy(14,16);
		cout<<"  B. 4";
		button(32);
		gotoxy(13,17);
		cout<<"  C. 2";
		button(48);
		gotoxy(13,18);
		cout<<"  D. 0";

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {ghalat++;
			   hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			   hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

	}
void mcq::engg()
	{
	  gotoxy(20,11);
		cleardevice();
		frame();
		guidmenu();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		gotoxy(11,12);
		cout<<"This is engineering mcqs ?"<<endl;
		gotoxy(13,15);
		button(0);
		cout<<"  A. Yes ";
		gotoxy(13,16);
		button(16);
		cout<<"  B. No";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Both";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Non"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"ENGINEERING TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {
			    ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			     hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			  hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}
		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		guidmenu();
		button(0);
		gotoxy(12,11);
		cout<<"What is programming?"<<endl;
		gotoxy(13,15);
		button(16);
		cout<<"  A. Fun";
		gotoxy(13,16);
		button(32);
		cout<<"  B. Logic"<<endl;
		gotoxy(13,17);
		cout<<"  C. Nothing";
		gotoxy(13,18);
		button(48);
		cout<<"  D. Tedious work"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {

			    tick=tick+4;
			    hitbtn(0,tick);
			    tcount++;
			    break;}
		case 'B':
		case 'b': {

			    ghalat++;
			    hitbtn(16,ghalat);
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
				hitbtn(48,ghalat);
			    break;}
		default:
			   unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(12,11);
		cout<<"Human lacks ... "<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. Brain";
		button(16);
		gotoxy(13,16);
		cout<<"  B. Feather";
		button(32);
		gotoxy(13,17);
		cout<<"  C. Hand";
		button(48);
		gotoxy(13,18);
		cout<<"  D. Ear"<<endl;

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {
			    ghalat++;
			    hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			    tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
				hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

		cleardevice();
		frame();
		gotoxy(20,10);
		cout<<"Mcq NO. "<<mcq_no;
		mcq_no++;
		frame();
		guidmenu();
		gotoxy(13,11);
		cout<<"How many legs have you?"<<endl;
		button(0);
		gotoxy(13,15);
		cout<<"  A. 3";
		button(16);
		gotoxy(14,16);
		cout<<"  B. 4";
		button(32);
		gotoxy(13,17);
		cout<<"  C. 2";
		button(48);
		gotoxy(13,18);
		cout<<"  D. 0";

		settextstyle(1,0,3);
		outtextxy(150,110,"COMPUTER SCIENCE TEST");
		kbhit();
		option=getch();

		switch (option)
		{
		case 'A':
		case 'a': {ghalat++;
			   hitbtn(0,ghalat);
			    break;}
		case 'B':
		case 'b': {tick=tick+4;
			   hitbtn(16,tick);
			   tcount++;
			    break;}
		case 'C':
		case 'c': {ghalat++;
			   hitbtn(32,ghalat);
			    break;}
		case 'D':
		case 'd': {ghalat++;
			    hitbtn(48,ghalat);
			    break;}
		default:
			  unsolved++;
		}

	}

/*****************End Of Class's Functions Definitions**************/