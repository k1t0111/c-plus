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
		cout<<"����˫�������캯��,�ұ�ִ����"<<endl; 
	} 
void printPoint( )
{ 
	cout<<"x ="<<x<<", "<<"y ="<<y<<endl; 
} 
	friend void getPointX(Point &); 
}; 
void getPointX(Point &p)
{ 
	cout<<"���� Point ����Ԫ���� X="<<p.x<<endl; 
} 
int main()
{ 
	Point a(4, 5);
	a. printPoint( ); 
	getPointX(a); 
	return 0; 
} 
