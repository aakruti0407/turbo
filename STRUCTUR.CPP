#include<stdio.h>
#include<conio.h>

struct student
{
     int rno,s1,s2,s3,total;
     double per;
     char sname[50];
};

void main()
{
     struct student s;
     clrscr();
     printf("\nEnter name of The student:");
     gets(s.sname);
     printf("\nEnter Roll No of the student:");
     scanf("%d",&s.rno);
     printf("\nEnter Marks of the student 1:");
     scanf("%d",&s.s1);
     printf("\nEnter Marks of the student 2:");
     scanf("%d",&s.s2);
     printf("\nEnter Marks of the student 3:");
     scanf("%d",&s.s3);
     s.total=s.s1+s.s2+s.s3;
     s.per=s.total/3;

     printf("\nName of The student: %s");
     printf("\nRoll No of The student:%d",s.rno);
     printf("\nTotal of The student:%d",s.total);
     printf("\nPercentage of The student:%lf",s.per);

     if(s.per>=70)
     {
	printf("\nDistinction");
     }
     else if(s.per>=60)
     {
	printf("\nFirst class");
     }

     else if(s.per>=50)
     {
	printf("\nSecond class");
     }

     else if(s.per>=40)
     {
	printf("\nPass class");
     }

     else
     {
	printf("\nFail");
     }
     getch();
}



