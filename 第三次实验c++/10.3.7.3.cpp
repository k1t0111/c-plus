#include <iostream>
using namespace std;

class Person                    //定义一个人  Person   类 
{
public:
	void get(int num1,string name1,string sex1,int old1); 
/*函数功能: 展示数据成员信息*/ 
	void display()
	{
		cout<<"编号:"<<num<<"  姓名:"<<name<<"  性别:"<<sex<<"年龄："<<old<<endl; 
	}

private:
    string name,sex;           //定义私有成员  姓名 name 性别 sex 编号 num 年龄 old   
 	int num,old; 
}; 
/*函数功能: 获取数据成员的值 并且 初始化*/
void Person::get(int num1,string name1,string sex1,int old1)
{
	num=num1;                  //编号 姓名 性别 年龄 赋初值   
 	name=name1;
	sex=sex1;
	old=old1; 
}

class  Student:public Person 
{
public:
	Student(string major1,int score1);
/*函数功能:  展示数据成员专业系别和成绩*/
	void display_1()
	{
		cout<<"专业系别:"<<major<<"成绩:"<<score<<endl; 
	} 

private:
	string major;               //私有成员 major 专业系别 score 成绩 
	int score; 
}; 
/*函数功能: 构造函数 初始化 系别 和 成绩*/ 
Student::Student(string major1,int score1)
{
	major=major1;               //专业和成绩初始化 
	score=score1; 
}

class Teacher:public Person
{
public:
	                            //构造函数  职称 和 所属部门 
	Teacher(string title1,string department1)
	{
		title=title1;
		department=department1;
	} 
	void display_1()            //输出职称和部门 
	{
		cout<<"职称:"<<title<<"部门:"<<department<<endl; 
	}
	
private:
	string title,department;   //私有成员  职称 和 部门 
};
int main()
{
	Student s1("信息安全",100); //创建一个学生对象
								//创建一个老师对象
	Teacher t1("教授","研究生院");
	cout<<"学生信息如下:"<<endl;
	s1.get(1001,"mike","男",19);//给学生信息赋值 
	s1.display();               //展示学生信息 
	s1.display_1();
	cout<<"老师信息如下:"<<endl;
	t1.get(1001,"jenson","男",45);//给老师信息赋值 
	t1.display();               //展示老师信息 
	t1.display_1();                   
} 
