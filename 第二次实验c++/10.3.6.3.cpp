#include <iostream>
using namespace std;
int main()
{
	int i,num[10],*p;               // i循环 num数组保存十个数字    p指针操作数组 
	p=num;
	cout<<"您好！请输入十个整数"<<endl; 
	for(i=0;i<10;i++)
		cin>>*(p+i); 
	int  max=0,min=100,cnt1,cnt2;  //打擂法 最小值min 最大值max  cnt记录下标 
	for(i=0;i<10;i++)
	{
		if(*(p+i)>max)             //最大值 
		{
			max=*(p+i);
			cnt1=i; 
		}
		if(*(p+i)<max)             //最小值 
		{
			min=*(p+i);
			cnt2=i; 
		}
	} 
	cout<<"最大值："<<max<<"下标:"<<cnt1<<endl; 
	cout<<"最小值："<<min<<"下标:"<<cnt2<<endl;
	return 0; 
} 
