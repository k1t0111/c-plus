#include <iostream> 
using namespace std;
main()
{
	int sum,num,x1,x2,x3,x4;                          //sum ����� num������λ����  x �����λ�� 
	cout<<"������һ����λ������";
	cin>>num;                                        
	x1=num/1000;                                      //�����λ�����ϵ��� 
	x2=(num-1000*x1)/100;
	x3=(num-1000*x1-100*x2)/10;
	x4=num%10;
	sum=x1+x2+x3+x4;                                  //��λ����� 
	cout<<"������ͽ��Ϊ:"<<sum; 
	 
	                                 
} 
