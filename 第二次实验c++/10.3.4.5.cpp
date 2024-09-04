#include <iostream>
#include <string> 
using namespace std;
class Student                                    //定义学生类 
{
private:                               
	string  num;                                 //学号 
	string  name;                                //姓名 
	string  sex;                                 //性别 
	string  old;                                 //年龄 
	string  major;                               //专业 
	string  phonenum;                            //电话号 
public:
	Student(){}                                  //构造函数 
	void setnum(string num1)                     //设置学号 
	{
		num=num1; 
	}
	void setname(string name1)                   //设置姓名 
	{
		name=name1; 
	}	
	void setsex(string sex1)                     //设置性别 
	{
		sex=sex1; 
	}	
	void setold(string old1)                     //设置年龄 
	{
		old=old1; 
	}	
	void setmajor(string major1)                 //设置专业 
	{
		major=major1;  
	}
	void setphonenum(string phonenum1)           //设置电话号 
	{
		phonenum=phonenum1; 
	}
	void getnum()                                //获得学号 
	{
		cout<<"学号:"<<num<<endl;             
	}
	void getname()                               //获得姓名 
	{
		 cout<<"姓名:"<<name<<endl;
	}	
	void getsex()                                //获得性别 
	{
		cout<<"性别:"<<sex<<endl;
	}	
	void getold() 			                     //获得年龄 
	{
		cout<<"年龄:"<<old<<endl; 
	}	
	void getmajor()    			                 //获得专业 
	{
		cout<<"专业:"<<major<<endl;  
	}
	void getphonenum()       			         //获得电话号 
	{
		cout<<"电话号:"<<phonenum<<endl; 
	}
	~Student(){cout<<"Successfully!";}            //析构函数 
	 
}; 
int main()
{
	Student s1;                                 //创建对象 s1
	s1.setname("陈小胜");
	s1.setnum(" 20180001");
	s1.setold(" 18 岁"); 
	s1.setphonenum("16100011234"); 
	s1.setsex("男");
	s1.setmajor("计算机专业");
	s1.getname();
	s1.getnum();
	s1.getold(); 
	s1.getphonenum(); 
	s1.getsex();
	s1.getmajor();
	return 0; 
} 
