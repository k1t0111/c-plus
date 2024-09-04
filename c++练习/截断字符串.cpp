#include <iostream>
#include <string> 
using namespace std;
void cut(string s1,int start,int end);                      //声明截断函数 
main()
{
	string s1;                                         //s1保存字符串 start end 截断区间 
	int start,end;
	cout<<"您好！请输入您的完整字符串和您所需要截断的区间"<<endl;
	cin>>s1>>start>>end;                               
	cut(s1,start-1,end-1); 
}
void cut(string s1,int start,int end)
{
	int i;
	cout<<"您截断的字符串为:";                         //i 控制循环 
	for(i=start;i<=end;i++)                            //循环输出截断字符串                    
	cout<<s1[i]; 
}
