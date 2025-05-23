#include<stdio.h>
#include<conio.h>

void main()
{
     int a;
     clrscr();
     printf("\nEnter A:");
     scanf("%d",& a);
     if(a>0)
     {
	printf("\nA is positive number");
     }
     else
     {
	printf("\nA is negative number");
     }
     getch();
}