#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<alloc.h>
#include<stdlib.h>




void count(){settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(14);
   setbkcolor(0);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(283, 160, "5");
    settextstyle(4, HORIZ_DIR, 4);
   outtextxy(0, 0, "PRESS SPACEBAR TO JUMP");
   delay(500);
   cleardevice();

   settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(14);
   setbkcolor(1);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(283, 160, "4");
     settextstyle(4, HORIZ_DIR, 4);
   outtextxy(0, 0, "PRESS SPACEBAR TO JUMP");
   delay(500);
   cleardevice();

   settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(14);
   setbkcolor(6);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(283, 160, "3");
     settextstyle(4, HORIZ_DIR, 4);
   outtextxy(0, 0, "PRESS SPACEBAR TO JUMP");
   delay(500);
   cleardevice();

   settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(14);
   setbkcolor(7);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(283, 160, "2");

     settextstyle(4, HORIZ_DIR, 4);
   outtextxy(0, 0, "PRESS SPACEBAR TO JUMP");
   delay(500);
   cleardevice();

   settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(14);
   setbkcolor(8);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(283, 160, "1");
     settextstyle(4, HORIZ_DIR, 4);
   outtextxy(0, 0, "PRESS SPACEBAR TO JUMP");
   delay(500);
   cleardevice();

   settextstyle(2, HORIZ_DIR, 6);
   outtextxy(213, 260, "Get Ready with space.");
   setcolor(1);
   setbkcolor(6);
   settextstyle(10, HORIZ_DIR, 6);
   outtextxy(233, 160, "GO!!!..");
   delay(500);
   cleardevice();
}


void cloud2(){setcolor(9);

   //left 1st
   ellipse(505,125,270,90,8,10);

   //left 2nd
   ellipse(491,116,0,105,15,15);

   //bada wala
   ellipse(468,104,10,170,20,20);

   //right 1st
   ellipse(442,116,70,170,20,15);

   //right 2nd
   ellipse(418,128,70,200,17,15);

   //bottom line
   ellipse(454,134,190,350,73,0);




   //left 2nd
   ellipse(491-70,116-20,345,105,15,15);

   //bada wala
   ellipse(468-70,104-20,10,170,20,20);

   //right 1st
   ellipse(442-70,116-20,70,170,20,15);

   //right 2nd
   ellipse(418-70,128-20,70,200,17,15);

   //bottom line
   ellipse(454-83,134-20,190,350,54,0);
}

















void path();
void cloud();
void cactus2(int midx,int &style);
void ci(int &x){//4
setfillstyle(1, getmaxcolor());
bar(15,x-123,35,x-113);

//5
bar(10,x-113,40,x-106);
setfillstyle(1, getmaxcolor());
//1
 fillellipse(25,x-79,18, 33);
//2
 setfillstyle(1, 0);
 fillellipse(30,x-89,5,5);

bar(25,x-74,50,x-69);

setfillstyle(1, getmaxcolor());
//6

bar(10,x-56,40,x-25);

//7
bar(40,x-49,45,x-45);

 //8
bar(43,x-45,45,x-34);

 //9
bar(10,x-25,15,x-10);


//11

bar(10,x-10,25,x);


//10
bar(35,x-25,40,x-10);

//12
bar(35,x-10,50,x);
}


void ci12(){//4

bar(15,266,35,276);

//5
bar(10,276,40,283);
setfillstyle(1, getmaxcolor());
//1
 fillellipse(25, 310,18, 33);
//2
 setfillstyle(1, 0);
 fillellipse(30, 300,5,5);

bar(25,315,50,320);

setfillstyle(1, getmaxcolor());
//6

bar(10,333,40,364);

//7
bar(40,340,45,344);

 //8
bar(43,344,45,355);


//10
bar(35,364,40,379);

//12
bar(35,379,50,389);
 }



void ci1(){//4

bar(15,266,35,276);

//5
bar(10,276,40,283);
setfillstyle(1, getmaxcolor());
//1
 fillellipse(25, 310,18, 33);
//2
 setfillstyle(1, 0);
 fillellipse(30, 300,5,5);

bar(25,315,50,320);

setfillstyle(1, getmaxcolor());
//6

bar(10,333,40,364);

//7
bar(40,340,45,344);

 //8
bar(43,344,45,355);

 //9
bar(10,364,15,379);


//11

bar(10,379,25,389);
}





void circ(int &asd,int &out,int &score,int &speed,int &style)
{int a[90],b[90],c[50],d[50],i,j,m;
 char sc[100];
for(int ja=389;ja>=200;ja-=(15+speed))
{
setfillstyle(SOLID_FILL,15);
      ci(ja);
      cactus2(asd,style);
      path();
      delay(50);
    setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);


 if(asd-20<=50 && asd-20>=30)
	      {for(i=0;i<90;i++)
	      a[i]=(ja-90)+i;


	      for(j=0;j<90;j++)
	      b[j]=299+j;

	      for(i=0;i<90;i++)
	      for(j=0;j<90;j++)
	      if (b[j]==a[i])
	      {out++;
	       ja=199;
	      m=400;
	      break;}}





if(ja>=299&&ja<=310)
	      {for(i=0;i<40;i++)
	      c[i]=10+i;


	      for(j=0;j<40;j++)
	      d[j]=(asd-20)+j;

	      for(i=0;i<40;i++)
	      for(j=0;j<40;j++)
	      if (d[j]==c[i])
	      {out++;
	       ja=199;
	      m=400;
	      break;}}





outtextxy(10,10,"SCORE:"); itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
{if(score%20==0)
speed+=1;}
cleardevice();

outtextxy(10,10,"SCORE:"); itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
asd-=(15+speed);
path();
}
nosound();
setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

if(out==0||m!=400)

{m=ja;
for(;m<=399;m+=(15+speed))
{
       setfillstyle(SOLID_FILL,15);
      ci(m);

 path();

cactus2(asd,style);
delay(50);

setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

 if(asd-20<=50 && asd-20>=30)
	      {for(i=0;i<90;i++)
	      a[i]=(m-90)+i;


	      for(j=0;j<90;j++)
	      b[j]=299+j;

	      for(i=0;i<90;i++)
	      for(j=0;j<90;j++)
	      if (b[j]==a[i])
	      {out++;

	      m=400;
	      break;}}






if(m>=299&&m<=310)
	      {for(i=0;i<40;i++)
	      c[i]=10+i;


	      for(j=0;j<40;j++)
	      d[j]=(asd-20)+j;

	      for(i=0;i<40;i++)
	      for(j=0;j<40;j++)
	      if (d[j]==c[i])
	      {out++;

	      m=400;
	      break;}}
outtextxy(10,10,"SCORE:");itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
 path();
cleardevice();
outtextxy(10,10,"SCORE:");itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
path();
setbkcolor(0);
    settextstyle(5, HORIZ_DIR, 6);

asd-=(15+speed);
{if (score%20==0)
speed+=1;}
}}

}
















void aa(int qwe,int rty);
void jas(int qwe,int rty);
void aks(int qwe,int rty);
void game_over()
{
  int midx, midy;

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
   outtextxy(midx-140, midy-50, "GAME OVER!!!");



/*Intro*/


sound (392);delay(700);
sound (196);delay(700);
sound (196);delay(125);
sound (262);delay(125);
sound (330);delay(125);
sound (392);delay(125);
sound (523);delay(125);


sound (660);delay(125);
sound (784);delay(575);
sound (660);delay(575);
sound (207);delay(125);
sound (262);delay(125);
sound (311);delay(125);
sound (415);delay(125);
sound (523);delay(125);
sound (622);delay(125);
sound (830);delay(575);
sound (622);delay(575);


sound (233);delay(125);
sound (294);delay(125);
sound (349);delay(125);
sound (466);delay(125);
sound (587);delay(125);
sound (698);delay(125);
sound (932);delay(575);
sound (932);delay(125);
sound (932);delay(125);
sound (932);delay(125);
sound (1046);
delay(100);
nosound();


   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   clrscr();



 }






void dc1(){setfillstyle(1, getmaxcolor());
//1

bar(10,289,40,299);

//2
bar(10,299,50,319);
setfillstyle(1, 0);
//3
bar(15,308,20,312);
setfillstyle(1, getmaxcolor());
//4
bar(10,319,25,324);

//5
bar(10,324,50,329);
//6

bar(10,329,40,364);

//7
bar(40,340,45,344);

 //8
bar(43,344,45,355);

 //9
bar(10,364,15,379);


//11

bar(10,379,25,389);
}





void dc12(){setfillstyle(1, getmaxcolor());
//1

bar(10,289,40,299);

//2
bar(10,299,50,319);
setfillstyle(1, 0);
//3
bar(15,308,20,312);
setfillstyle(1, getmaxcolor());
//4
bar(10,319,25,324);

//5
bar(10,324,50,329);
//6

bar(10,329,40,364);

//7
bar(40,340,45,344);

 //8
bar(43,344,45,355);



//10
bar(35,364,40,379);

//12
bar(35,379,50,389);}






void dc(int &x){setfillstyle(1, getmaxcolor());
//1

bar(10,x-100,40,x-90);

//2
bar(10,x-90,50,x-70);
setfillstyle(1, 0);
//3
bar(15,x-81,20,x-77);
setfillstyle(1, getmaxcolor());
//4
bar(10,x-70,25,x-65);

//5
bar(10,x-65,50,x-60);
//6

bar(10,x-60,40,x-25);

//7
bar(40,x-49,45,x-45);

 //8
bar(43,x-45,45,x-34);

 //9
bar(10,x-25,15,x-10);

//10
bar(35,x-25,40,x-10);
//11

bar(10,x-10,25,x);
//12
bar(35,x-10,50,x);}




void dino(int qwe,int rty)
{
int color;
int gd , gm ;
gd = VGA ; gm = VGAHI;
ShowBMP(qwe,rty,"dino.bmp"); /* Enter File Name Her e */
}


void aa(int qwe,int rty)
{
int color;
int gd , gm ;
gd = VGA ; gm = VGAHI;
ShowBMP(qwe,rty,"aa.bmp"); /* Enter File Name Her e */
}

void aks(int qwe,int rty)
{
int color;
int gd , gm ;
gd = VGA ; gm = VGAHI;
ShowBMP(qwe,rty,"aks.bmp"); /* Enter File Name Her e */
}

void jas(int qwe,int rty)
{
int color;
int gd , gm ;
gd = VGA ; gm = VGAHI;
ShowBMP(qwe,rty,"jas.bmp"); /* Enter File Name Her e */
}











void cloud()
{

   setcolor(9);

   //left 1st
   ellipse(505,125,270,90,8,10);

   //left 2nd
   ellipse(491,116,0,105,15,15);

   //bada wala
   ellipse(468,104,10,170,20,20);

   //right 1st
   ellipse(442,116,70,170,20,15);

   //right 2nd
   ellipse(418,128,70,200,17,15);

   //bottom line
   ellipse(454,134,190,350,73,0);


}

void cactus2(int midx,int &style)

{


   {  //FOR MIDDLE CACTUS
      setfillstyle(style,10);

      bar(midx+5, 299, midx-5, 389);

      //FOR LEFT SMALL CACTUS
      setfillstyle(style,10);

      bar(midx-20, 321, midx-15, 369);

      //FOR LEFT SMALL CACTUS LINK
      setfillstyle(style,10);

      bar(midx-15, 361, midx-5, 369);

      //FOR RIGHT SMALL CACTUS
      setfillstyle(style,10);

      bar(midx+20, 309, midx+15, 359);

      //FOR RIGHT SMALL CACTUS LINK
      setfillstyle(style,10);

      bar(midx+5, 351, midx+15, 359);
cloud2();
   cloud();
   }

  }


void heading()
	{int midx, midy;
	float radius = 0;
	int col=1;

	int asd;


	int i=0;

	 for (i=0;i<=420;i++)
	{ setcolor(col);
	   arc(0,getmaxy(),0,90,radius) ;
	   arc(getmaxx(),getmaxy(),90,180,radius) ;
	   arc(getmaxx(),0,180,270,radius) ;
	   arc(0,0,270,360,radius++) ;
	   delay(10);
	if(radius==60)
	col=9;
	if(radius==120)
	col=3;
	if(radius==180)
	col=2;
	if(radius==240)
	col=14;
	if(radius==300)
	col=12;
	if(radius==360)
	   col=4;
	}

	for(int p=0;p<=getmaxx();p++)
	for(int l=0;l<=getmaxy();l++)
	putpixel(p,l,2) ;





	for(int qw=0;qw<=5;qw++)
	  { moveto(qw+100,20);
	   { settextstyle(5, HORIZ_DIR, 7);

	     setcolor(qw+9);
	   /* make the text 1/3 the normal width */

	   gotoxy(0,0);
	   outtext("CACTUS ");

	/* make the text 3 times normal width */

	outtext("JUMPER");
		}
	}


		asd=0;
	   for( qw=0;qw<=4;qw++)
	   { moveto(qw+5,150);
	     { settextstyle(1, HORIZ_DIR, 1);

	     setcolor(asd);

	     setusercharsize(1, 1, 1, 1);

	     outtext("PRESS SPACEBAR TO PLAY \n");
	     asd+=4;

	 }
	}
	asd=0;

	 for( qw=0;qw<=4;qw++)
	 { moveto(qw+5,200);
	 {  settextstyle(1, HORIZ_DIR, 1);

	   setcolor(asd);

	   setusercharsize(1, 1, 1, 1);
	   outtext("PRESS S :TO SCOREBOARD \n");
	   asd+=4;
	}
	}


	asd=0;
	for( qw=0;qw<=4;qw++)
	{ moveto(qw+5,250);
	{  settextstyle(1, HORIZ_DIR, 1);

	 setcolor(asd);

	setusercharsize(1, 1, 1, 1);
	outtext("PRESS E: TO EXIT \n");
	asd+=4;
	}
	}

		  asd=9;
	for( qw=0;qw<=5;qw++)
	{ moveto(qw+5,400);
		{  settextstyle(1, HORIZ_DIR, 2);

	 setcolor(asd-2);

	 setusercharsize(1, 1, 1, 1);
	outtext("BETA VERSION : 5.0");
	asd+=2;

	}
	}



}




void path()
{



   {  setcolor(6);

      /* set the fill style */
      setfillstyle(SOLID_FILL, getcolor());

      /* draw the bar */
      bar(0, 390, getmaxx(),400);


   }

   /* clean up */


}






















void block(int &asd,int &out,int &score,int &speed,int &style)
{int a[90],b[90],c[50],d[50],i,j,m;
char sc[100];
for(int ja=389;ja>=200;ja-=(15+speed))
{
setfillstyle(SOLID_FILL,15);
      dc(ja);
      cactus2(asd,style);
      path();
      delay(50);



 if(asd-20<=50 && asd-20>=30)
	      {for(i=0;i<90;i++)
	      a[i]=(ja-90)+i;


	      for(j=0;j<90;j++)
	      b[j]=299+j;

	      for(i=0;i<90;i++)
	      for(j=0;j<90;j++)
	      if (b[j]==a[i])
	      {out++;
	       ja=199;
	      m=400;
	      break;}}





if(ja>=299&&ja<=310)
	      {for(i=0;i<40;i++)
	      c[i]=10+i;


	      for(j=0;j<40;j++)
	      d[j]=(asd-20)+j;

	      for(i=0;i<40;i++)
	      for(j=0;j<40;j++)
	      if (d[j]==c[i])
	      {out++;
	       ja=199;
	      m=400;
	      break;}}





outtextxy(10,10,"SCORE:"); itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
{if(score%20==0)
speed+=1;}
cleardevice();

outtextxy(10,10,"SCORE:"); itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
asd-=(15+speed);
path();
}
nosound();
if(out==0||m!=400)

{m=ja;
for(;m<=399;m+=(15+speed))
{
       setfillstyle(SOLID_FILL,15);
      dc(m);

 path();

cactus2(asd,style);
delay(50);


 if(asd-20<=50 && asd-20>=30)
	      {for(i=0;i<90;i++)
	      a[i]=(m-90)+i;


	      for(j=0;j<90;j++)
	      b[j]=299+j;

	      for(i=0;i<90;i++)
	      for(j=0;j<90;j++)
	      if (b[j]==a[i])
	      {out++;

	      m=400;
	      break;}}






if(m>=299&&m<=310)
	      {for(i=0;i<40;i++)
	      c[i]=10+i;


	      for(j=0;j<40;j++)
	      d[j]=(asd-20)+j;

	      for(i=0;i<40;i++)
	      for(j=0;j<40;j++)
	      if (d[j]==c[i])
	      {out++;

	      m=400;
	      break;}}
outtextxy(10,10,"SCORE:");itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
 path();
cleardevice();
outtextxy(10,10,"SCORE:");itoa(score,sc,10); outtextxy(100,50,sc);
score+=5;
path();
asd-=(15+speed);
{if (score%20==0)
speed+=1;}
}}

}








void rainbow()
{int midx, midy;
   float radius = 0;
   int col=1;
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   int as,ad,asd=10;
   as=midx;
   ad=midy;

int i=0;

 for (i=0;i<=420;i++)
{ setcolor(col);
   arc(0,getmaxy(),0,90,radius) ;
   arc(getmaxx(),getmaxy(),90,180,radius) ;
   arc(getmaxx(),0,180,270,radius) ;
   arc(0,0,270,360,radius++) ;
   delay(100);
   if(radius==60)
   col=9;
   if(radius==120)
   col=3;
   if(radius==180)
   col=2;
   if(radius==240)
   col=14;
   if(radius==300)
   col=12;
   if(radius==360)
   col=4;


   }
}



void detector()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;



   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   } }



















