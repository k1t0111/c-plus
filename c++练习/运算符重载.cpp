
/*                   ���������                     �Ӻ� ����            */

#include <iostream>
using namespace std;

class Complex                                    //������ 
{ 
private:
	int real,image;                              //real ʵ��   image �鲿 
	char op;
	
public:
	Complex(){} 
	Complex(int real1,int image1);               //���캯��
	Complex operator+(Complex &c2);              //�Զ����Ա����ʵ������������� 
	void display()                               //������ݳ�Ա 
	{
		cout<<"("<<real<<","<<image<<op<<")"; 
	} 
};
Complex::Complex(int real1,int image1)
{
	real=real1;                                  //��ʼ�����ݳ�Ա 
	image=image1; 
	op='i'; 
}
Complex Complex::operator+(Complex &c2)          //ͨ�����캯�� ���ض��� 
{
	return Complex(real+c2.real,image+c2.image); 
}
int main()
{
	Complex c1(1,2),c2(2,3),c3;                  //�������� 
	c3=c1+c2;                                    //��������� 
	c3.display(); 
	return 0;
}
