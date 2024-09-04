#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int tx, int ty)
	{
	x =tx;
	y =ty;
	cout<<"我是构造函数,我被执行了"<<endl;
    }
	void printPoint( )
	{
		cout<<"x ="<<x<<", "<<"y ="<<y<<endl;
	}
	~Point( )
	{
	cout<<"我的析构函数,我被执行了"<<endl;
	}
	};
int main( )
{
	Point a(4, 5);
	a. printPoint( );
	return 0;
}
