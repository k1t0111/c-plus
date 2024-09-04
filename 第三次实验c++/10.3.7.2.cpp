#include <iostream>
using namespace std;

class Time                                  //创建一个时间类 
{
public:
	Time(int h,int m,int s)
	{
		hours=h;                            //构造函数 时 分 秒  赋初值                      
		minutes=m;
		seconds=s;
	}
	void display()                          //输出数据成员 
	{
		cout<<"出生时间:"<<hours<<"时  "<<minutes<<"分  "<<seconds<<"秒"<<endl;
	}

protected:                                  //h m s 时分秒 被保护成员 
	int hours, minutes, seconds;
};
class Date                                  //创建一个时期类别 
{
public:
	Date(int m,int d,int y)                 //构造函数 日期赋初值 
	{
		month=m;                           
		day=d;
		year=y;
	}
	void display_1()	                    //展示函数 
	{	
		cout<<"出生年月:"<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
	}	

protected:
int month,day,year;                         //被保护成员  月 日  年 
};

class birthtime:public Date,public  Time    //多继承 birthtime 继承 date time 
{
public:
	birthtime(string name);                 
	void display_2()                        //函数功能 输出信息 
	{
		cout<<"姓名:"<<name<<endl; 
	}
	void get()
	{
		cout<<"请输入小孩出生年月日：";
		cin>>year>>month>>day; 
		cout<<"请输入小孩出生时分秒：";
		cin>>hours>>minutes>>seconds;
	} 
	
private:
	string name; 
};
/*函数功能: 构造函数 初始化*/
	birthtime::birthtime(string name):Date(1,12,1),Time(1,1,1)
	{
		this->name=name;
	}
int main()
{
	birthtime baby1("李华");                //李华 对象
	baby1.get();                            //获取信息 
	baby1.display_2();                      //展示信息 
	baby1.display_1();
	baby1.display();                      
	return 0; 
} 
