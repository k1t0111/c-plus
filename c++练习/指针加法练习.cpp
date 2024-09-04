#include <iostream>
using namespace std;
inline int add(int *&p1,int *&p2);
main()
{
	int a,b,*pa,*pb,able[4];
	cout<<"请输入两个双精度数字"<<endl;
	cin>>a>>b;
	pa=&a;
	pb=&b;
	cout<<add(pa,pb);
	able[1]=1;
	int (&p3)[4]=able;
	cout<<p3[1]; 
}
inline int add(int *&p1,int *&p2)                      //带参数函数和引用 
{
	*p1+=*p2;
	return *p1;
} 
