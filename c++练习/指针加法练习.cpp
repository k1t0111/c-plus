#include <iostream>
using namespace std;
inline int add(int *&p1,int *&p2);
main()
{
	int a,b,*pa,*pb,able[4];
	cout<<"����������˫��������"<<endl;
	cin>>a>>b;
	pa=&a;
	pb=&b;
	cout<<add(pa,pb);
	able[1]=1;
	int (&p3)[4]=able;
	cout<<p3[1]; 
}
inline int add(int *&p1,int *&p2)                      //���������������� 
{
	*p1+=*p2;
	return *p1;
} 
