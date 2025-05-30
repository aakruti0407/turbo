#include<stdio.h>
#include<conio.h>

void main()
{
     int a[5],*p,i;
     clrscr();
     printf("\nEnter Array Element\n");
     for(i=0;i<5;i++)
     {
	printf("\nEnter %d Element:",i);
	scanf("%d",&a[i]);
     }
     p=&a[0];
     printf("\nArray Element with Their Address\n");
     for(i=0;i<5;i++)
     {
	 printf("\nA[%d]:%d& Address Is %v",i,a[i],p++);
     }
     getch();
}