#include <iostream>
using namespace std;
class count          //������� 
{
public: 
	int num1,num2;   //������������ 
	char op;         //������� 
	count()          //���캯�� 
	{
		num1=0;      //����ֵ 
		num2=0;
		op='*'; 
	}  
	void add();      //�� 
	void div();      //�� 
	void mul();      //�� 
	void sub();      //���� 
	~count()         //�������� 
	{
		cout<<"Successfully��"; 
	}
	
};
void count::add()    //��
{
	cout<<num1+num2<<endl; 
}
void count::div()    //�� 
{
	cout<<num1-num2<<endl; 
}
void count::mul()    //�� 
{
	cout<<num1*num2<<endl; 
}
void count::sub()    //����
{
	cout<<num1/num2<<endl; 
}
int main()
{
	count c1;        //��һ�����������  
	cout<<"����������Ҫ�����ı��ʽ"<<endl;
	cin>>c1.num1>>c1.op>>c1.num2;
	                 //����������ʽ
	if(c1.num2==0&&c1.op=='/')
  	{                //�����ж� 0��Ϊ���� 
		cout<<"0�����Ե����� ����������:"<<endl;
		cin>>c1.num1>>c1.op>>c1.num2;
	} 
	switch(c1.op)    //��֧�ж� �Ӽ��˳� 
	{
		case '+' :c1.add();break;
		case '-' :c1.div();break;
		case '*' :c1.mul();break;
		case '/' :c1.sub();break;
		default :cout<<"������� �Ӽ��˳�"; 
	}
} 
