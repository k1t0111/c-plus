#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[100];                       //s1保存字符串  p指向s1 
	char *p=s1 ;
	cout<<"请输入一个字符串:";
	gets(s1);
	int i;                              //i 控制循环 
	int length,upper=0,lower=0,phy=0,space=0 ;   
	                                    // length长度 upper大写字母 lower 小写字母 phy数字 space空格
	length=strlen(s1);
	for(i=0;i<length;i++)            
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')    //判断大写字母 
		upper++;
		else
		if(*(p+i)>='a'&&*(p+i)<='z')    //判断小写字母
		lower++;
		else
		if(*(p+i)>='0'&&*(p+i)<='9')    //判断数字
		phy++;
		else 
		space++;                        //判断其他字符		 
	}
	cout<<"您好!您的字符串里面一共有"<<length<<"个字符"<<endl;
	cout<<"大写字母："<<upper<<endl;
	cout<<"小写字母："<<lower<<endl;
	cout<<"数字："<<phy<<endl; 
	cout<<"其他字符："<<space<<endl;
	return 0; 
} 
