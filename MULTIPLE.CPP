#include<iostream.h>
#include<conio.h>

class A
{
    int a;
    public :
	    void getA()
	    {
	       cout<<"\nEnter A : ";
	       cin>>a;
	    }
	    void putA()
	    {
	       cout<<"\nA : "<<a;
	    }
};

class B
{
    int b;
    public :
	    void getB()
	    {
	       cout<<"\nEnter B: ";
	       cin>>b;
	    }
	    void putB()
	    {
	       cout<<"\nB: "<<b;
	    }
};
class C :public A,public B
{
    int C;
    public :
	    void getC()
	    {
	       cout<<"\nEnter C : ";
	       cin>>c;
	    }
	    void putC()
	    {
	       cout<<"\nC :"<<c;
	    }
};

void main()
{
    C c1;
    clrscr();
    C1.getA();
    C1.getB();
    C1.getC();
    C1.putA();
    C1.putB();
    C1.putC();
    getch();
}