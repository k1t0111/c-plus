#include <iostream>
using namespace std;


class  Animas                //����һ��������   
{
public:
	virtual void speak()=0;
};

class Dog:public Animas      //����dog�̳л��ද�� 
{
	
public:
	void speak();            //��Ա����  ������� 
};

/*��������: ������Ľ��� */ 
void Dog::speak() 
{
	cout<<"������������"<<endl; 
}

class Cat:public Animas     //����cat�̳л��ද�� 
{
	
public:
	void speak();            //��Ա����  �������  
	
	friend ostream & operator<<(ostream & output,Cat & cat); 
};

/*��������: ���è�Ľ��� */
void Cat::speak() 
{
	cout<<"������������"<<endl; 
}

/*��������: �ض��������*/
ostream & operator<<(ostream & output,Cat & cat)
{
	output<<"������������"<<endl;//������� ���è�Ľ��� 
	return output;
}

int main()
{
	Dog dog1;                //���������� 
	Cat cat1; 				 //����è����
	cout<<"�����Ƕ�����ù��г�Ա����:";
	dog1.speak();
	cat1.speak(); 
							 //�ض��������ʵ��
	cout<<"�ض�������,cat Ҫ��ʼ���:"<<cat1;
	cout<<"�麯�� �� ��ֵ������ ʵ��"<<endl; 
	Animas &animas1=dog1;
	Animas &animas2=cat1;
	animas1.speak();
	animas2.speak(); 
	return 0; 
} 
