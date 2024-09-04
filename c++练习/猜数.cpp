//猜数字
#include <iostream>
#include <string> 
#include <time.h> 
using namespace std;
main()
{
	int n,guess;                                     //n保存给定的数字 guess 表示用户猜的数字
	srand((unsigned) time(NULL));
	n=rand()%100;                                    //系统生成随机数字 
	cout<<"随机数字生成完毕，请输入您的猜测答案";
	cin>>guess;
	if(guess>n);
	{
		cout<<"Guess！ It is too big！" ;
	}
	if(guess==n)
	cout<<"Congratulations！You guess right！";
	if(guess<n) 
	cout<<"Guess ！It is too small";
	string str3,str1="你好",str2="李鹏"; 
	str3=str2+str1; 
	cout<<str1<<str2<<str3; 
} 
