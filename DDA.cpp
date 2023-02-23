#include <iostream>
#include <graphics>
#include <conio>
#include <math>
#include <dos>
void main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,steps,xinc,yinc;
	initgraph(&gd,&gm," ");
	cout<<"Enter value of x1 and y1";
	cin>>x1>>y1;
	cout<<"Enter value of x2 and y2" ;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	{
		steps=abs(dx);
	}
	else
	{
		steps=abs(dy);
	}
	xinc=dx/steps;
	yinc=dy/steps;
	for (int i=0; i<steps; i++)
	{
		putpixels(x1,y1,3);
		x1=x1+xinc;
		y1=y1+yinc;
	}
	getch()
	closegraph();
}