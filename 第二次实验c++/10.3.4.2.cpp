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
	cout<<"���ǵ��������캯��,�ұ�ִ����"<<endl;
	}
	Point(int tx, int ty){
	x =tx;
	y =ty;
	++countPoint;
	cout<<"����˫�������캯��,�ұ�ִ����"<<endl;
	}	
void printPoint( )
{	
	cout<<"x ="<<x<<", "<<"y ="<<y<<endl;
	cout<<"Ŀǰһ����"<<countPoint<<"�� Point ����"<<endl;
}
~Point( )
{	
	-- countPoint;
	cout<<"�ҵ���������,�ұ�ִ����"<<endl;
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
