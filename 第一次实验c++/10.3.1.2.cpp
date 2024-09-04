#include <iostream>
#include <iomanip> 
#define  N 3.14159 
using namespace std;
main()
{
	int r;
	float l,s;                         // r 圆的半径 l 圆的周长 s 圆的面积 
	cout<<"您好！请输入您的圆的半径";
	cin>>r;
	l=2*N*r;                          //计算周长和面积 
	s=N*r*r;
	cout<<setprecision(2)<<"您的结果为："<<endl<<setiosflags(ios::fixed<<"周长：l="<<l<<endl<<"面积:s="<<s; 
}
