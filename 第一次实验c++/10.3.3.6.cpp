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
	cout<<"������ 3 ������:";
	cin>>a>>b>>c;
	max(a, b);
	max(a, c);
	max(b, c);
	max(a, b, c);
	cout<<"������ 3 ��ʵ��:";
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
	cout<<"�����Ϊ:"<<a<<endl;
	else
	cout<<"�����Ϊ:"<<b<<endl;
}
int max(int a,int b,int c)
{
	int tiny=0;                          //�洢��Сֵ 
	if(a>tiny)
	tiny=a;
	if(b>tiny);
	tiny=b;
	if(c>tiny);
	tiny=c;
	cout<<"���ֵΪ:"<<tiny<<endl; 
}
double max(double a,double b)
{
	if(a>b)
	cout<<"�����Ϊ:"<<a<<endl;
	else
	cout<<"�����Ϊ:"<<b<<endl;
}
double max(double a,double b,double c)
{
	double tiny=0;                          //�洢��Сֵ 
	if(a>tiny)
	tiny=a;
	if(b>tiny);
	tiny=b;
	if(c>tiny);
	tiny=c;
	cout<<"���ֵΪ:"<<tiny<<endl; 
}
