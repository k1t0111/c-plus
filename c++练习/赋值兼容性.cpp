#include <iostream>
using namespace std;


class  Animas                //定义一个动物类   
{
public:
	virtual void speak()=0;
};

class Dog:public Animas      //子类dog继承基类动物 
{
	
public:
	void speak();            //成员函数  输出叫声 
};

/*函数功能: 输出狗的叫声 */ 
void Dog::speak() 
{
	cout<<"汪！汪！汪！"<<endl; 
}

class Cat:public Animas     //子类cat继承基类动物 
{
	
public:
	void speak();            //成员函数  输出叫声  
	
	friend ostream & operator<<(ostream & output,Cat & cat); 
};

/*函数功能: 输出猫的叫声 */
void Cat::speak() 
{
	cout<<"喵！喵！喵！"<<endl; 
}

/*函数功能: 重定义输出流*/
ostream & operator<<(ostream & output,Cat & cat)
{
	output<<"喵！喵！喵！"<<endl;//输入输出 输出猫的叫声 
	return output;
}

int main()
{
	Dog dog1;                //创建狗对象 
	Cat cat1; 				 //创建猫对象
	cout<<"首先是对象调用公有成员函数:";
	dog1.speak();
	cat1.speak(); 
							 //重定义输出流实验
	cout<<"重定向的输出,cat 要开始叫喽:"<<cat1;
	cout<<"虚函数 和 赋值兼容性 实验"<<endl; 
	Animas &animas1=dog1;
	Animas &animas2=cat1;
	animas1.speak();
	animas2.speak(); 
	return 0; 
} 
