#include <iostream>
using namespace std;
main()
{
	int n,i,sum=0;                 //n ��ʾ�������Χ i���ڿ���ѭ�� sum ���ܺ�
	cout<<"���ã�������һ������ (2=<n<=40)";
	cin>>n;
	for(i=2;i<=n;i++)
		sum+=(i-1)*(i); 
	cout<<"���Ľ��Ϊ:"<<sum;	
} 
