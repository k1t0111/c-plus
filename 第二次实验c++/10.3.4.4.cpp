// ���������
#include <iostream>
#include <math.h> 
using namespace std;
class Triangle                                           //������������ 
{
private:                                                 //˽�г�Ա x1x2x3 �߳� 
	int x1;
	int x2; 
	int x3; 
	double s;                                            //s ��������� 
public:
	Triangle();                                          //�������캯��
	void area();                                         //��������������� 
	void Shape();                                        //�����ж����������ͺ��� 
	void set(int,int,int);                               //�������������κ��� 
	~Triangle();                                         //������������ 
}; 
/*��������:���캯����ʼ��*/
Triangle::Triangle()
{
	x1=1;                                                //��ʼ��������Ϊ111�ȱ������� 
	x2=2;
	x3=3; 
}
/*��������:���캯����ʼ��*/
void Triangle::Shape()
{
	if(x1==x2&&x1==x3)
	cout<<"����һ���ȱ�������Ŷ��"<<endl;                //if������ж�  �ȱ�    
	else
	if(x1==x2)
 	cout<<"����һ������������Ŷ��"<<endl;                //�ֱ��жϵ��������� 
	else
	if(x1==x3) 
	cout<<"����һ������������Ŷ��"<<endl;a
	else
	if(x2==x3)
	cout<<"����һ������������Ŷ��"<<endl;
	else
	cout<<"����һ��һ��������Ŷ��"<<endl;                //һ�������� 
}
/*��������:���캯����ʼ��*/
void Triangle::set(int xx1,int xx2,int xx3)
{
	if(xx1+xx2>xx3&&xx1+xx3>xx2&&xx2+xx3>xx1)                     //�ж��Ƿ���Ϲ��������� 
	{
		x1=xx1;                                              //��ֵ���������������ߵ�ֵ 
		x2=xx3;
		x3=xx3;
	}
	else
	cout<<"�޷����������Σ�"<<endl; 
} 
/*��������:�������������*/
void Triangle::area()
{
	double p;                                             //pΪ�ܳ���һ��
	p=0.5*(x1+x2+x3);                                     //������ܳ� 
	s=sqrt(p*(p-x1)*(p-x2)*(p-x3));                       //�����ʽ����� 
	cout<<s<<endl;   
}
/*��������:��������*/
Triangle::~Triangle()
{
	cout<<"Successfully��";
} 
int main()
{
	Triangle  tri;                                        //�������� 
	tri.set(3,3,4);                                       //��ֵ������
	tri.area();                                           //�������������
	tri.Shape();                                          //�ж����������� 
	return 0; 
} 
