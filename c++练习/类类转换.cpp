/*
**********************************
 c++ 语言实现 类类型转换 基本类型
  基本类型转换 类类型  
                        
					 --作者:周俊帅
**********************************
*/ 

#include <iostream>

using namespace std;

class Student                      //创建 学生类 
{
public:
	Student(int);
    void display(); 
	operator double()
	{
		return name; 
	} 
private:
	int name;                      
};

/*函数功能:学生类构造函数*/
Student::Student(int name1)
{
	name=name1;	
}

/*函数功能:打印学生身份信息*/
void Student::display()
{
	cout<<name<<endl; 
}
 
/*函数功能:实现基本类型转换类类型*/
void change(Student s1)
{
	s1.display(); 
} 

int main()
{
	change(1);                    //执行转换函数 基本-->类类 
	Student s2(2),s3(3);          //建立两个学生对象
	Student s4((double)s2+(double)s3); 
	                              //建立学生四 二三转换赋值
	s4.display(); 
} 
 
 
 
 
 
