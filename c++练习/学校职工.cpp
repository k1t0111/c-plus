
/*学校人员系统*/
/*创作者:青穹 周俊帅*/ 

#include <iostream> 
#include <string>

using namespace std;

class Student                     //创建一个 学生类 
{

public:
	Student(string name1,int old1,int score1);
								  //构造函数 初始化 
	int display();                //展示信息 
	
private:
	int score,old;
	string name;
	
};

/*函数功能:学生构造函数信息初始化*/
Student::Student(string name1,int old1,int score1)
{
	name=name1;                   //学生信息初始化 
	old=old1;
	score=score1;	
}

/*函数功能:展示学生全部信息*/
int Student::display()
{
	cout<<"年龄:"<<old<<endl;
	cout<<"姓名:"<<name<<endl;
	cout<<"绩点:"<<score<<endl; 
	return 1;
}

class Employee                    //创建一个职工类
{

public:
	Employee(string name1,int old1,string level1); 
								  //构造函数 初始化 
	int display();                //展示信息 
	
protected:
	int old;
	string name,level;
	
};

/*函数功能:职工函数信息初始化*/
Employee::Employee(string name1,int old1,string level1)
{
	name=name1;                   //职工信息初始化
	old=old1;
	level=level1;
}

/*函数功能:展示职工*/
int Employee::display()
{
	cout<<"年龄:"<<old<<endl;
	cout<<"姓名:"<<name<<endl;
	cout<<"职称:"<<level<<endl;
	return 1;
}

class Teacher:public Employee     //创建一个老师类
{
	 
public:
	Teacher(string name1,int old1,string level1,string subject1);
						          //构造函数初始化
	int display(); 
private:
	string subject;
}; 

/*函数功能:派生类构造函数初始化*/
Teacher::Teacher(string name1,int old1,string level1,string subject1):
Employee(name1,old1,level1)
{
	 subject=subject1; 
} 

/*函数功能:展示老师信息*/
int Teacher::display()
{
	cout<<"年龄:"<<old<<endl;
	cout<<"姓名:"<<name<<endl;
	cout<<"职称:"<<level<<endl;
	cout<<"教学学科:"<<subject<<endl;
	return 1; 
}

int main()
{
	Student s1("周枫",20,100);    //创建学生对象 展示学生信息 
	s1.display(); 
	Employee e1("王雪梅",36,"教学组长");
								  //创建职工对象 展示个人信息
	e1.display();
	Teacher t1("龙笑雪",35,"教师","英语"); 
								  //创建教师对象 展示个人信息
	t1.display(); 
}  
