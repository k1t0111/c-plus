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
	cout<<"���ǹ��캯��,�ұ�ִ����"<<endl;
    }
	void printPoint( )
	{
		cout<<"x ="<<x<<", "<<"y ="<<y<<endl;
	}
	~Point( )
	{
	cout<<"�ҵ���������,�ұ�ִ����"<<endl;
	}
	};
int main( )
{
	Point a(4, 5);
	a. printPoint( );
	return 0;
}
