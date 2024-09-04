#include <iostream>
using namespace std;
main()
{
	char op;                                       //op 保存字母 
	cout<<"您好请输入一个字母"; 
	cin>>op;
	if(op>='A'&&op<='Z')
	{
		cout<<"您输入的是大写字母,其小写字母为:";  //判断大小写并且转换 
		printf("%c",op+32); 
	}
	else
	{
		cout<<"您输入的是小写字母,其大写字母为:";
		printf("%c",op-32); 
	}	 
} 
