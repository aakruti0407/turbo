#include<iostream.h>
#include<conio.h>

class Box
{
      double width,height,depth;
      public:
	     Box()
	     {
		  cout<<"\nDefault Constructor Called";
		  width=3;
		  height=4;
		  depth=5;
	     }
	     Box(double w,double h,double d)
	     {
		 cout<<"\nParameterrized Constructor Called";
		 width=w;
		 height=h;
		 depth=d;
	     }
	     void volume()
	     {
		 cout<<"\nVolume Of Box Is "<<width*height*depth;
	     }
};
void main()
{
     clrscr();
     Box b1;
     b1.volume();
     Box b2(4,5,6);
     b2.volume();
     getch();
}