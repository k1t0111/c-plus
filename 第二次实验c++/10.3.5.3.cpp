#include <iostream>
using namespace std;
main()
{
	int cnt1,cnt2,min=100,max=0;                 	//cnt 记录下标 min最小值 max最大值
	int i,num[10]={12,1,45,4,24,5,32,3,90,65};      //i控制循环  num保存十个整数 
	for(i=0;i<10;i++)
	{
		if(num[i]<=min)                             //打擂法找最小值 
		{
			min=num[i];
			cnt1=i;                                 //记录下标 
		} 
	}
	for(i=0;i<10;i++)
	{
		if(num[i]>=max)                             //打擂法找最大值 
		{
			max=num[i];
			cnt2=i;                                 //记录下标 
		} 
	}  
	cout<<"数组保存的最大值为:"<<max<<"   "<<"下标为:"<<cnt2<<endl; 
	cout<<"数组保存的最小值为:"<<min<<"   "<<"下标为:"<<cnt1<<endl;
}
