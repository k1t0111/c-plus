#include <iostream>
using namespace std;

class Base                           //创建一个基本类 
{
public:
	void setx(int i)                 //获得数据赋值 
	{
		x=i;
	}
	int getx()                       //输出 
	{
		return x;        
	}
	
public:
int x;

};
class Derived:public Base 
{
public:
	void sety(int i)
	{
		y=i;
	}
	int gety()
	{	
		return y;
	}
	void show()
	{
		cout<<"Base::x ="<<x<<endl; 
	}
public:
	int y;
};
int main()
{
	Derived bb;
	bb.setx(25);
	bb.sety(30);
	bb.show( );
	cout<<"Base::x ="<<bb.x<<endl;
	cout<<"Derived::y ="<<bb.y<<endl;
	cout<<"Base::x ="<<bb.getx()<<endl;
	cout<<"Derived::y ="<<bb. gety( )<<endl;
	return 0;
}
