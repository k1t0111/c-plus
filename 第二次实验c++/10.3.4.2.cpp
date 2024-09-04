#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
	static int countPoint;
public:
	Point(int tx)
	{
	x =tx;
	y =0;
	++countPoint;
	cout<<"我是单参数构造函数,我被执行了"<<endl;
	}
	Point(int tx, int ty){
	x =tx;
	y =ty;
	++countPoint;
	cout<<"我是双参数构造函数,我被执行了"<<endl;
	}	
void printPoint( )
{	
	cout<<"x ="<<x<<", "<<"y ="<<y<<endl;
	cout<<"目前一共有"<<countPoint<<"个 Point 对象"<<endl;
}
~Point( )
{	
	-- countPoint;
	cout<<"我的析构函数,我被执行了"<<endl;
}
};
int Point::countPoint=0;
int main( )
{
	Point a(4, 5);
	a. printPoint( );
	Point b(5) ;
	b. printPoint( );
	return 0;
}
