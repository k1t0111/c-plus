#include <iostream>
using namespace std;
class Student                             //学生的类 
{
private: 
	int  score;                           //score 成绩 
public:
	long num;                             //num 学号
	Student()     					      //构造函数   
	{
		 num=0;                           //初始化 
		 score=0; 
	}
	void set(long num1,int score1);       //成员函数 计算成绩最大值 
	int displace();                       //成员函数  呈现成绩 
	~Student()                            //析构函数 
	{
	} 
};
/*函数功能:为对象赋值*/
void Student::set(long num1,int score1)
{
	num=num1;                             //数据成员赋值 
	score=score1; 
}
/*函数功能:展现成绩*/ 
int Student::displace()
{
	return score;                         //成员函数  调用私密数据成员 
}
/*函数功能:找最大值*/
void max(Student s[10]) 
{
	int i,mac=0,cnt;                      //打擂法最大值 i循环  cnt保存下标 
	for(i=0;i<10;i++)
	{
		if(s[i].displace()>mac)                //打擂法比较 
		{
			mac=s[i].displace();
			cnt=i;                        //记录下标 
		}
	}
	cout<<"成绩最高为:"<<mac<<endl<<"学号为："<<s[cnt].num; 
}
int main()
{
	Student s[10];                        //创建十个对象
	s[0].set(200001,80);                  //对象赋值 
	s[1].set(200002,85);
	s[2].set(200003,82);
	s[3].set(200004,87);
	s[4].set(200005,78);
	s[5].set(200006,45);
	s[6].set(200007,80);
	s[7].set(200008,50);
	s[8].set(200009,98);
	s[9].set(200010,40);
	max(s);                              //求最大成绩 
	return 0; 
} 
