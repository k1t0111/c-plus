#include <iostream>
int fun(int);
using namespace std;
int k=1;
main()
{
	int i=4 ;
	fun(i) ;
	cout<<"(1) i="<<i<<", k ="<<k<<endl ;
}
int fun(int m )
{
	m+=k;
	k+=m;
	{

		char k='B';
		cout<<"(2) m ="<<m<<", k ="<<k<<endl ;
	}
	cout<<"(3) m ="<<m<<", k ="<<k<<endl ;
	return 0;
}
