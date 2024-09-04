/*#include <iostream>
using namespace std;
template<class T>                 //类模板测试 
class test
{
private:                          //私有成员 T 
	T a;
public:
	test(T a1)                    //构造函数 
	{
		a=a1; 
	}
	T display()                  //展示类内数据 
	{
		cout<<a<<endl;
		return a; 
	}
};
class date;                       //类提前声明 
class time
{
private:
	int s1;                       //私有成员s1 
public:
	time(int s11)                 //构造函数初始化 
	{
		s1=s11; 
	}
	void display(date &t)         //传入date类对象 
	{
		cout<<t.s2<<endl;
		cout<<s1<<endl; 
	}
};
class date                         //日期类别 
{
private:
	int s2;                        //私有成员s2 
public:
	date(int s22)
	{
		s2=s22; 
	} 
	                               //将time的display函数作为友元函数 
	friend void time::display(); 
};
int main()
{
	test<int> op1(1);              //test类对象
	date  op2(2);                  //date类别的对象 
	time  op3(3);                  //time类别的函数
	op1.display();                //类模板成员函数实验
	op3.display() 
	return 0; 
} */
#include <iostream>
using namespace std;
class Date;                     //对Date类的提前引用声明
class Time
{                          //声明Time类
public:
	Time(int,int,int);                //声明构造函数
	void display(Date &);            //display是成员函数,形参是Date类对象的引用
private:
	int hour;
    int minute;
    int sec;
};
class Date
{                             //声明Date类
public:
	Date(int,int,int);                    //声明构造函数
friend void Time∷display(Date &); //声明Time中的display函数为本类的友元成员函数
private:
   int month;
   int day;
   int year;
};
Time∷Time(int h,int m,int s)           //定义类Time的构造函数
{
   hour=h;
   minute=m;
   sec=s;
}
void Time∷display(Date &d)       //display的作用是输出年、月、日和时、分、秒
 {
   cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
 //引用Date类对象中的私有数据
   cout<<hour<<":"<<minute<<":"<<sec<<endl;     //引用本类对象中的私有数据
 }
Date∷Date(int m,int d,int y)          //类Date的构造函数
{
	month=m;
  	day=d;
  	year=y;
}
int main()
{
   Time t1(10,13,56);             //定义Time类对象t1
   Date d1(12,25,2004);           //定义Date类对象d1
   t1.display(d1);                //调用t1中的display函数,实参是Date类对象d1
   return 0;
}

