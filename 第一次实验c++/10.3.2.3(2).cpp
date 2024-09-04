#include <iostream>
using namespace std;
main()
{
	int num,cnt=0;                                 //num 保存整数  cnt 记录数字 
	cout<<"您好，请输入一个整数:";
	cin>>num;
	if(num%3==0)
	cnt++;
	if(num%5==0)
	cnt+=2;
	if(num%7==0)
	cnt+=4; 
	switch(cnt)
	{
		case 0 :cout<<"不能被3，5，7整除";break; 
		case 1 :cout<<"能被3整除";break;
		case 2 :cout<<"能被5整除";break;
		case 3 :cout<<"能被3，5整除";break;
		case 4 :cout<<"能被7整除";break;
		case 5 :cout<<"能被3，7整除";break;
		case 6 :cout<<"能被5，7整除";break;
		case 7 :cout<<"能被3，5，7整除";break;
	}  
} 
