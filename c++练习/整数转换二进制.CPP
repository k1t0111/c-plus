#include <iostream> 
using namespace std;
main()
{
	int num,cnt;                       //num保存整数 cnt 记录位数 
	int num1[32];                      //num1数组保存结果                    
	cout<<"您好！请输入一个整数";
	cin>>num; 
	int i;                             //控制循环 
	for(i=0,cnt=0;num!=0;i++)
	{
 		num1[i]=num%2;                 //求二进制 
		num=num/2; 
		cnt++;
	}
	cout<<"您好！您的二进制表示为:";
	for(i=cnt-1;i>=0;i--)              //输出二进制表示 
	cout<<num1[i];
	cout<<endl; 
	cout<<"一共有"<<cnt<<"位"; 
} 
