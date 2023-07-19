#include<iostream.h>
#include<dos.h>

#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,dx,dy,steps,xinc,yinc;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"enter values of x2 &y2"<<endl;
cin>>x1>>y1;
cout<<"enter values of x2 and y2"<<endl;
cin>>x2>>y2;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
xinc=dx/steps;
yinc=dy/steps;
for(int i=0;i<steps;i++)
{
putpixel(x1,y1,8);
x1=x1+xinc;
y1=y1+yinc;
delay(50);
}
getch();
closegraph();

getch();
}