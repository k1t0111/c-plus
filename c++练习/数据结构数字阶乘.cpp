/*
*********************************************
 ��ʱ�临�Ӷ��� O(n) ����㷨
 ���� 1��+2��+ .... n��
  
 					--����:�ܿ�˧
********************************************* 
*/


#include <iostream> 

using namespace std;


/*��������: ʵ�� ���� 1-n �Ľ׳����*/
void function(int n)
{
	int item=1,sum=0;                   // item ���浥�����ֽ׳� sum ����׳�֮�� 
	for(int i=1;i<=n;i++)
	{
		item*=i;
		sum+=item; 
	} 
	cout<<"���Ľ��Ϊ:"<<sum; 
} 

int main()
{
	int n;                              // n �������� 
	cout<<"������n�Ĵ�С:"<<endl;
	cin>>n;
	function(n);                        //ִ�к��� function 
} 
