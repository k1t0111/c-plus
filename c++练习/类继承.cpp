#include <iostream>
using namespace std;

class Person                      //定义一个人类 
{
private:
	string name,sex;              //基本属性 name 姓名 sex性别 
	
public:
	void get(string name1,string sex1)
	{
		sex=sex1;                 //构造函数初始化 姓名 性别 
		name=name1; 
	}
	void display()                //展示数据 
	{
		name="李华";
		sex="男"; 
		cout<<"姓名:"<<name<<"    性别:"<<sex<<endl; 
	}
	 
protected:
	int old;                      //保护成员   old 年龄 
}; 
class Student:public Person       //继承派生类 学生 
{
private:
	double num;                   //私有成员 num 学号 

public:
	void get(int old1,double num1)
	{
		num=num1;
		old=old1; 
	} 
	void display_1()             //展示 年龄  学号 成员 
	{
		cout<<"年龄:"<<old<<"   学号:"<<num<<endl;	
	}	
};
int main()
{
	Person  p1;   		    //人类 的对象 p1
	p1.get("李华","男"); 
	p1.display();
	Student s1;                 //学生类对象 s1
	s1.get(12,1001); 
	s1.display();
	s1.display_1(); 
} 
