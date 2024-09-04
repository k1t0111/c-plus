/*判断是否为大小写字母*/ 
#include <iostream>
using namespace std;
main()
{
	char op;                                          //op 保存字符 
	cout<<"您好！请输入一个数据:";
	cin>>op;
	if(op>='A'&&op<='Z')
	cout<<"您好 您输入的是一个大写字母";
	else
	if(op>='a'&&op<='z')
	cout<<"您好，您输入的是一个小写字母";
	else
	cout<<"您好，您输入的不是一个字母哦！"; 
	 
} 
