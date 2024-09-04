#include <iostream>
using namespace std;
class count          //计算机类 
{
public: 
	int num1,num2;   //两个数的运算 
	char op;         //运算符号 
	count()          //构造函数 
	{
		num1=0;      //赋初值 
		num2=0;
		op='*'; 
	}  
	void add();      //加 
	void div();      //减 
	void mul();      //乘 
	void sub();      //除法 
	~count()         //析构函数 
	{
		cout<<"Successfully！"; 
	}
	
};
void count::add()    //加
{
	cout<<num1+num2<<endl; 
}
void count::div()    //减 
{
	cout<<num1-num2<<endl; 
}
void count::mul()    //乘 
{
	cout<<num1*num2<<endl; 
}
void count::sub()    //除法
{
	cout<<num1/num2<<endl; 
}
int main()
{
	count c1;        //第一个计算机对象  
	cout<<"请输入您所要操作的表达式"<<endl;
	cin>>c1.num1>>c1.op>>c1.num2;
	                 //输入操作表达式
	if(c1.num2==0&&c1.op=='/')
  	{                //输入判断 0不为除数 
		cout<<"0不可以当除数 请重新输入:"<<endl;
		cin>>c1.num1>>c1.op>>c1.num2;
	} 
	switch(c1.op)    //分支判断 加减乘除 
	{
		case '+' :c1.add();break;
		case '-' :c1.div();break;
		case '*' :c1.mul();break;
		case '/' :c1.sub();break;
		default :cout<<"输入错误 加减乘除"; 
	}
} 
