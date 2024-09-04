#include <iostream>
using namespace std;
main()
{
	int n,i,sum=0;                 //n 表示输入最大范围 i用于控制循环 sum 求总和
	cout<<"您好，请输入一个整数 (2=<n<=40)";
	cin>>n;
	for(i=2;i<=n;i++)
		sum+=(i-1)*(i); 
	cout<<"您的结果为:"<<sum;	
} 
