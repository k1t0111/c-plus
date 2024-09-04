#include <iostream>
#include <string>
using namespace std;
/*函数功能：将十六进制数字转换为十进制*/ 
void HtoD(string str)
{
	int n; 
	n=stoi(str,0,16);
	cout<<n; 
}
main()
{
	string hs;                             //使用string类 保存字符串 
	cout<<"请输入一个十六进制数:" ;
	cin>>hs;
	HtoD(hs);                              // 调用函数显示转换的结果;
}
