#include  <iostream>
using namespace std;

class Time                       //定义一个时间类 
{
private:
	int h,m,s;                   //h 时 m 分 s 秒 
public:
	Time(int,int,int);           //构造函数 
	void display()               //输出对象属性时间 
	{
		cout<<"    "<<h<<":"<<m<<":"<<s<<endl; 
	}
};
Time::Time(int h1,int m1,int s1)
{
	h=h1;                        //构造函数初始化对象 
	m=m1;
	s=s1; 
}
int main()
{
	Time time1(14,25,25),time2(13,12,12);  
	                            //创建time1 time2 对象时间
	time1.display();	
	time2.display();
	return 0;						 
} 
