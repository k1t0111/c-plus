/*�򵥼���������*/
#include <iostream>
#include <iomanip> 
using namespace std;
double  sum,num;                                       //ȫ�ֱ��� ������ 
/*��������:�ӷ�����*/
void add(float num1,float num2,char sign)
{
	sum=(double)num1+num2;                        //�ӷ����������� 
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*��������:��������*/
void sub(float num1,float num2,char sign)          
{ 
   	sum=(double)num1-num2;                        //��������������
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*��������:�˷�����*/
void mul(float num1,float num2,char sign)
{
	sum=(double)num1*num2;                        //�˷�����������
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*��������:��������*/
void divi(float num1,float num2,char sign)
{
	sum=num1/num2;                               //��������������
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
main()
{
	float num1,num2;                             //num1 num2 ���������������  
	char sign,op;                               //sign ���������  op�ж� 
	do
	{
		cout<<"���ã����������������������� :";       
		cin>>num1>>num2;                       //��������Ҫ����ʽ 
		cout<<"����Ҫʲô�����أ�(+-*/)������ϣ���������С�����λ�����أ�"<<endl;
		cin>>sign>>num;
		if(num2==0&&sign=='/')                 //��ֹ�������� 0��Ϊ��ĸ 
		{
			cout<<"����,���ݳ������㷨��0��������ĸ"<<endl<<"���������룺";
			cin>>sign; 
		} 
		switch(sign)                         
		{                                      //��֧�ṹѡ������ģʽ 
			case '+' :add(num1,num2,sign);break;
			case '-' :sub(num1,num2,sign);break;
			case '*' :mul(num1,num2,sign);break;
			case '/' :divi(num1,num2,sign);break; 
		} 
		cout<<"�Ƿ�Ҫ�������� ��(y) ��(n)"<<endl;
		cin>>op; 
	}
	while(op=='y'||op=='Y'); 
} 
