#include<iostream.h>
#include<conio.h>

int main()
{
    int row=5;
    for(int i=row;i>0;i--)
    {
       for(int i=row;i>0;i--)
       {
	  for(int j=0;j<=row;j++)
	  {
	     if(j>=i)
	     {
	       cout<<" ";
	     }
	     else
	     {
		cout<<" ";
	     }
	  }
	  cout<<"\n";
       }
       return 0;
    }
}