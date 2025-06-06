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
     getch();
}