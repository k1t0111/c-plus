#include <iostream>
#include <iomanip>
using namespace std;
void subp()
{
	int x=0,y=0;                               /*Œ Ã‚ */
	int a,b;
	a=x-y;
	b=x+y;
	x+=5;
	y+=8;
	cout<<"a="<<a<<", b ="<<b<<endl ;
	cout<<"x ="<<x<<", y ="<<y<<endl ;
}
 int x, y ;
main()
{
	int a=9,b=3;
	x=a-b; 
	y=a+b;
	subp();
	subp();
	cout<<"a="<<a<<", b ="<<b<<endl ;
	cout<<"x ="<<x<<", y ="<<y<<endl ;
}
