#include <iostream>
using namespace std;

class Teacher                    //定义一个老师类  
{
protected:
	string name,sex,address;     //私有成员  姓名  性别 地址  
	int old;                     //年龄 
	long long phonenum;               //电话 
	string title;                //职称 
	 
public:
	                             //构造函数 初始化 
	Teacher(string name1,string sex1,string address1,string title1,int old1,long long phonenum); 
	void display(); 
 
};

/*函数功能: Teacher类的构造函数进行初始化*/
Teacher::Teacher(string name1,string sex1,string address1,string title1,int old1,long long phonenum1)
{
	name=name1;
	sex=sex1;
	address=address1;
	title=title1;
	old=old1;
	phonenum=phonenum1; 
}

/*函数功能:展示基类的 数据成员*/
void Teacher::display()
{
	cout<<"姓名:"<<name<<"   "<<"性别:"<<sex<<"   "<<"年龄:"<<old<<endl;
	cout<<"职称:"<<title<<"  "<<"地址:"<<address<<"   "<<"电话号码:"<<phonenum<<endl; 
}

class Cadre                      //定义一个干部类  
{
protected:
	string name,sex,address;     //私有成员  姓名  性别 地址  
	int old;                     //年龄 
	long long phonenum;          //电话 
	string post;                 //职务 
	 
public:
	                             //构造函数 初始化 
	Cadre(string name1,string sex1,string address1,string post1,int old1,long long phonenum); 
	void display(); 
 
};

/*函数功能: Cadre类的构造函数进行初始化*/
Cadre::Cadre(string name1,string sex1,string address1,string post1,int old1,long long phonenum1)
{
	name=name1;
	sex=sex1;
	address=address1;
	post=post1;
	old=old1;
	phonenum=phonenum1; 
}

/*函数功能:展示基类的 数据成员*/
void Cadre::display()
{
	cout<<"姓名:"<<name<<"   "<<"性别:"<<sex<<"   "<<"年龄:"<<old<<endl;
	cout<<"职务:"<<post<<"  "<<"地址:"<<address<<"   "<<"电话号码:"<<phonenum<<endl; 
}

                                    //定义一个老师干部类 ,继承  Teacher Cadre  
class Teacher_Cadre:public Teacher,public  Cadre             
{
	
private:
	int wages;

public:
	Teacher_Cadre(string name1,string sex1,string address1,
	string post1,int old1,long long phonenum,string title1,int wages);
	void show();
}; 

/*函数功能: 派生类构造函数  初始化数据成员*/ 
Teacher_Cadre::Teacher_Cadre(string name1,string sex1,string address1,
	string post1,int old1,long long phonenum,string title1,int wages1):Teacher(
	name1,sex1,address1,title1,old1,phonenum),
	Cadre(name1,sex1,address1,post1,old1,phonenum)
{
	wages=wages1;
}

/*函数功能:展现 派生类 数据成员*/
void Teacher_Cadre::show()
{
	Teacher::display();            // 解决二义性 调用Teacher 类的display   
	cout<<"职务:"<<post<<"   "<<"薪水:"<<wages<<endl;
	 
}

int main()
{								  //定义一个老师职位类的对象t1
	Teacher_Cadre t1("王雪梅","女","襄阳","老师",35,15327906564,"备课组长",7000);           
	cout<<"这是一个职工的信息:"<<endl;
	t1.show();
	
	return 0;
}
