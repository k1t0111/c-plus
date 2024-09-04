/*闰年的判断*/
#include <iostream>
using namespace std;
main()
{
	int year;                                              //保存输入的年份 
	cout<<"您好！欢迎来到小程序！"<<endl<<"请输入一个整数";
	cin>>year;
	if(year%4==0&&year%100!=0)
	cout<<year<<"  is a leap year！";
	else 
	cout<<year<<"  is not a leap year！";
} 
