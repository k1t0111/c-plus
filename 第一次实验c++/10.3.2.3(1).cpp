/*if-else形*/
#include <iostream>
using namespace std;
main()
{
	int num;                                   //num保存整数  
	cout<<"您好，请输入一个整数！";
	cin>>num;
	if(num%3==0)                               //判断能否被三整除再分别讨论 
	{
		if(num%5==0)                           //判断能否被五整除再分别讨论 
		{
			if(num%7==0)                       //判断能否被七整除再分别讨论 
				cout<<"能被3，5，7整除"; 
			else
				cout<<"能被3，5整除"; 
		}
		else
		{
			if(num%7==0)
				cout<<"能被3，7整除"; 
			else
				cout<<"能被3整除"; 
		} 
	} 
	else
	{
		if(num%5==0)
		{
			if(num%7==0)
				cout<<"能被5，7整除"; 
			else
				cout<<"能被5整除"; 
		}
		else
		{
			if(num%7==0)
				cout<<"能被7整除"; 
			else
				cout<<"不能被3，5，7整除"; 
		} 
	} 
	 
}
