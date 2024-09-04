#include <iostream>
using namespace std;

class Point                      //����һ������ 
{
private:
	int x,y;                     //ֱ������ϵ�������� 
	
public:
	Point(){}                    //ȱʡ���캯�� 
	Point(int x1,int y1)         //���������캯����ʼ�� 
	{
		x=x1;                
		y=y1; 
	} 
	Point(Point & p)            //�������캯��  �����ʼ��   
	{
		x=p.x;
		y=p.y; 
	} 
	int Getx();                 //��ȡ���ݳ�Աx 
	int Gety();                 //��ȡ���ݳ�Աy
	void Display()
	{							//չʾȫ�����ݳ�Ա 
		cout<<"x��"<<x<<endl<<"y:"<<y<<endl;       
	}
	bool operator==(Point &);	//�ж�����������Ƿ����
	friend Point & operator+(const Point &p1,const Point &p2); 
	                            //��������������
	friend Point & operator-(const Point &p1,const Point &p2);
								//�������������� 
	
};
/* ��������:��ȡ���ݳ�Աx  */
int Point::Getx()
{
	return x;
}
/* ��������:��ȡ���ݳ�Աy  */
int Point::Gety()
{
	return y; 
}
/*	��������:�ж�����������Ƿ����	*/
bool Point::operator==(Point &p)
{
	if(x==p.x&&y==p.y)          //������������ݳ�Ա�Ա� 
	return true;
	else
	return false;
}
/*	��������:��������������	*/
Point & operator+(const Point &p1,const Point &p2)
{
	Point p3; 
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
							  //���ض���ļӺ� 
	return p3;
}
/*	��������:��������������	*/
Point & operator-(const Point &p1,const Point &p2)
{
							  //���ض���ļ��� 
	Point p3; 
	p3.x=p1.x-p2.x;
	p3.y=p1.y-p2.y;
							  //���ض���ļӺ� 
	return p3;
}
int main()
{
							 //������������� 
	Point  P1(1,2),P2(2,3),P3(P1);
	P1.Display();            //ʵ�� �����������
	cout<<"��ȡx yֵ:" ;
	cout<<P1.Getx();
	cout<<"   "; 
	cout<<P1.Gety()<<endl; 	
	P3.Display();            //����P3 �������캯�� 
	P3=P1+P2;                //���ԼӼ������������ 
	P3.Display();
	P3=P1-P2; 
	P3.Display();
	if(P1==P2)               //���Զ����Ƿ���� 
	{
		cout<<"�����������Ŷ��"<<endl;
	}
	else
	{
		cout<<"�����������Ŷ��"<<endl;	
	}	 
	return 0;
}
