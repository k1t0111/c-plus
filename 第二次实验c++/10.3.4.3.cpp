#include<iostream> 
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
		cout<<"我是双参数构造函数,我被执行了"<<endl; 
	} 
void printPoint( )
{ 
	cout<<"x ="<<x<<", "<<"y ="<<y<<endl; 
} 
	friend void getPointX(Point &); 
}; 
void getPointX(Point &p)
{ 
	cout<<"我是 Point 的友元函数 X="<<p.x<<endl; 
} 
int main()
{ 
	Point a(4, 5);
	a. printPoint( ); 
	getPointX(a); 
	return 0; 
} 
