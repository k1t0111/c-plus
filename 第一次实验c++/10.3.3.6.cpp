#include<iostream>
using namespace std;
int main( )
{
	int max(int a,int b);
	int max(int a,int b,int c);
	double max(double a,double b);
	double max(double a,double b,double c); 
	int a, b, c;
	double x, y, z;
	cout<<"请输入 3 个整数:";
	cin>>a>>b>>c;
	max(a, b);
	max(a, c);
	max(b, c);
	max(a, b, c);
	cout<<"请输入 3 个实数:";
	cin>>x>>y>>z;
	max(x, y);
	max(x, z);
	max(y, z);
	max(x, y, z);
	return 0;
}
int max(int a,int b)
{
	if(a>b)
	cout<<"最大数为:"<<a<<endl;
	else
	cout<<"最大数为:"<<b<<endl;
}
int max(int a,int b,int c)
{
	int tiny=0;                          //存储最小值 
	if(a>tiny)
	tiny=a;
	if(b>tiny);
	tiny=b;
	if(c>tiny);
	tiny=c;
	cout<<"最大值为:"<<tiny<<endl; 
}
double max(double a,double b)
{
	if(a>b)
	cout<<"最大数为:"<<a<<endl;
	else
	cout<<"最大数为:"<<b<<endl;
}
double max(double a,double b,double c)
{
	double tiny=0;                          //存储最小值 
	if(a>tiny)
	tiny=a;
	if(b>tiny);
	tiny=b;
	if(c>tiny);
	tiny=c;
	cout<<"最大值为:"<<tiny<<endl; 
}
