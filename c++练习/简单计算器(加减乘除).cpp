/*简单计算器程序*/
#include <iostream>
#include <iomanip> 
using namespace std;
double  sum,num;                                       //全局变量 保存结果 
/*函数功能:加法运算*/
void add(float num1,float num2,char sign)
{
	sum=(double)num1+num2;                        //加法运算输出结果 
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*函数功能:减法运算*/
void sub(float num1,float num2,char sign)          
{ 
   	sum=(double)num1-num2;                        //减法运算输出结果
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*函数功能:乘法运算*/
void mul(float num1,float num2,char sign)
{
	sum=(double)num1*num2;                        //乘法运算输出结果
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
/*函数功能:除法运算*/
void divi(float num1,float num2,char sign)
{
	sum=num1/num2;                               //除法运算输出结果
	cout<<setprecision(num)<<setiosflags(ios::fixed)<<num1<<sign<<num2<<"="<<sum<<endl; 
}
main()
{
	float num1,num2;                             //num1 num2 保存输入的运算数  
	char sign,op;                               //sign 保存运算符  op判断 
	do
	{
		cout<<"您好！请输入您的两个运算数字 :";       
		cin>>num1>>num2;                       //输入所需要的算式 
		cout<<"您需要什么运算呢？(+-*/)并且您希望结果保留小数点后几位数字呢？"<<endl;
		cin>>sign>>num;
		if(num2==0&&sign=='/')                 //防止错误输入 0不为分母 
		{
			cout<<"您好,根据除法运算法则0不可做分母"<<endl<<"请重新输入：";
			cin>>sign; 
		} 
		switch(sign)                         
		{                                      //分支结构选择运算模式 
			case '+' :add(num1,num2,sign);break;
			case '-' :sub(num1,num2,sign);break;
			case '*' :mul(num1,num2,sign);break;
			case '/' :divi(num1,num2,sign);break; 
		} 
		cout<<"是否要继续计算 是(y) 否(n)"<<endl;
		cin>>op; 
	}
	while(op=='y'||op=='Y'); 
} 
