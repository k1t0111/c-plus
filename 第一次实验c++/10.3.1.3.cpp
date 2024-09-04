#include <iostream>
using namespace std; 
main()
{
	double USD,GPB,JPY,RMB;    // 美元  英镑 日元 人名币	
	cout<<"请输入您的人名币数量";
	cin>>RMB;
	USD=RMB/6.2765;           //分别计算美元英镑日元兑换钱数 
	GPB=RMB/8.907;
	JPY=RMB/0.0582; 
	cout<<"美元:"<<USD<<endl<<"英镑:"<<GPB<<endl<<"日元："<<JPY; 
} 
