//สตั้
#include <iostream> 
using namespace std;
main()
{
	int *p;
	p=new int[3]; 
	int i; 
	p[1]=2;
	cout<<p[1];
	delete []p; 
	p=NULL; 
	 
} 
