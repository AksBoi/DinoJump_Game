
#include<process.h>
#include"DIANOJMP.h"
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{detector();
char sc[100],sc2[100];
int score=0,score2=0;
char yn='y';
while(yn=='y'||yn=='Y'){ char choice;
 heading();

 choice=getch();
  switch(choice)
  {
  case ' ': score=0;
  cleardevice();
		  int i,j,out=0,a[80],b[80],q,w,ja=389,r=0,speed=0,style=1;

	       outtextxy(100,100,"CHOOSE YOUR CHARACTER");
	       dc(200);outtextxy(100,200,"<--PRESS(1)");
	       ci(400); outtextxy(100,300,"<-- PRESS(2)");
	     char  ch=getch();
	   switch(ch)

	  {case '1':
	  cleardevice();
	       count();
			  cleardevice();


		 do
		       {style++;
		       for(i=getmaxx();i>=0;i-=(15+speed),r++)

		{
		setfillstyle(SOLID_FILL,15);


		{    if(r%2==0)
		      dc1();
			else
		    dc12();}
		path();
		 cactus2(i,style);
		setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

		delay(50);
		itoa(score,sc,10);
		outtextxy(10,10,"SCORE:") ;outtextxy(100,50,sc);
		score+=5;
		cleardevice();
		itoa(score,sc,10);
		outtextxy(10,10,"SCORE:") ; outtextxy(100,50,sc);
		setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

		path();
		if(i-20<=50)
		{out++;
		break;}

		  if(kbhit())
		  { ch=getch();
		  if(ch==' ')
		       sound (392);

		       block(i,out,score,speed,style);}

		  }
		  {if(score%25==0)
		speed+=1;}
	       score+=5;
	       if(speed==4)
		{ out++;
		break;}
		if(style==14)
		{style=2;}} while(out==0);
		game_over();
		break;

      case '2': cleardevice();

			 count();
			  cleardevice();


		 do
		 {style++;
				for(i=getmaxx();i>=0;i-=(15+speed),r++)

		{
				setfillstyle(SOLID_FILL,15);


		{    		if(r%2==0)
				ci1();
					else
		  ci12();}
		    cactus2(i,style);
		    setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

			path();
			itoa(score,sc,10);
			delay(50);
			outtextxy(10,10,"SCORE:") ; outtextxy(100,50,sc);
			score+=5;
			cleardevice();
			itoa(score,sc,10);
			outtextxy(10,10,"SCORE:") ;outtextxy(100,50,sc);
			path();
			if(i-20<=50)
		{out++;
		break;}
			    setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);


				if(kbhit())
		  { ch=getch();
		  if(ch==' ')
		  sound (392);

		  circ(i,out,score,speed,style);}

				cloud();
		  }
		  {if(score%25==0)
		speed+=1;}
		score+=5    ;
		if(speed==4)
		{ out++;
		break;}
		if(style==14)
		{style=2;}
		} while(out==0);
		game_over();
		break;}
		break;
     case 's' :
     case 'S' :itoa(score,sc,10);
     cleardevice();
      {if(score>score2)
       score2=score;
       }
	   itoa(score2,sc2,10);
			    setbkcolor(6);
    settextstyle(4, HORIZ_DIR, 6);
	outtextxy(10,10,"HIGH SCORE:");outtextxy(370,10,sc2);
	outtextxy(10,100,"YOUR SCORE:");outtextxy(370,100,sc);
	      getch();
	      break;



  case 'e':exit(0);
	   break;


  }




 cleardevice();
settextstyle(5, HORIZ_DIR, 4);
outtextxy(10,100,"IF YOU WANT TO CONTINUE");
outtextxy(100,150," PRESS (Y)");
yn=getch();
}
closegraph();
}






