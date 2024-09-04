
/*                   运算符重载                     加号 重载            */

#include <iostream>
using namespace std;

class Complex                                    //复数类 
{ 
private:
	int real,image;                              //real 实部   image 虚部 
	char op;
	
public:
	Complex(){} 
	Complex(int real1,int image1);               //构造函数
	Complex operator+(Complex &c2);              //自定义成员函数实现运算符号重载 
	void display()                               //输出数据成员 
	{
		cout<<"("<<real<<","<<image<<op<<")"; 
	} 
};
Complex::Complex(int real1,int image1)
{
	real=real1;                                  //初始化数据成员 
	image=image1; 
	op='i'; 
}
Complex Complex::operator+(Complex &c2)          //通过构造函数 返回对象 
{
	return Complex(real+c2.real,image+c2.image); 
}
int main()
{
	Complex c1(1,2),c2(2,3),c3;                  //创建对象 
	c3=c1+c2;                                    //运算符重载 
	c3.display(); 
	return 0;
}
