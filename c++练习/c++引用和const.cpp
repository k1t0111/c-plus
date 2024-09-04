#include <iostream>
using namespace std;
main()
{
	int a=1,b=2;
	 int *p=&a;
	int *&pr= p;
	cout<<*pr;
	a=3;
	cout<<*pr;
	pr=&b;
	cout<<*pr;
} 
 
