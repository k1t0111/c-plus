// 三角形类别
#include <iostream>
#include <math.h> 
using namespace std;
class Triangle                                           //创建三角形类 
{
private:                                                 //私有成员 x1x2x3 边长 
	int x1;
	int x2; 
	int x3; 
	double s;                                            //s 三角形面积 
public:
	Triangle();                                          //声明构造函数
	void area();                                         //声明计算面积函数 
	void Shape();                                        //声明判断三角形类型函数 
	void set(int,int,int);                               //声明设置三角形函数 
	~Triangle();                                         //声明析构函数 
}; 
/*函数功能:构造函数初始化*/
Triangle::Triangle()
{
	x1=1;                                                //初始化三角形为111等边三角形 
	x2=2;
	x3=3; 
}
/*函数功能:构造函数初始化*/
void Triangle::Shape()
{
	if(x1==x2&&x1==x3)
	cout<<"这是一个等边三角形哦！"<<endl;                //if语句先判断  等边    
	else
	if(x1==x2)
 	cout<<"这是一个等腰三角形哦！"<<endl;                //分别判断等腰三角形 
	else
	if(x1==x3) 
	cout<<"这是一个等腰三角形哦！"<<endl;a
	else
	if(x2==x3)
	cout<<"这是一个等腰三角形哦！"<<endl;
	else
	cout<<"这是一个一般三角形哦！"<<endl;                //一般三角形 
}
/*函数功能:构造函数初始化*/
void Triangle::set(int xx1,int xx2,int xx3)
{
	if(xx1+xx2>xx3&&xx1+xx3>xx2&&xx2+xx3>xx1)                     //判断是否符合构成三角形 
	{
		x1=xx1;                                              //赋值给新三角形三条边的值 
		x2=xx3;
		x3=xx3;
	}
	else
	cout<<"无法构成三角形！"<<endl; 
} 
/*函数功能:计算三角形面积*/
void Triangle::area()
{
	double p;                                             //p为周长的一半
	p=0.5*(x1+x2+x3);                                     //计算半周长 
	s=sqrt(p*(p-x1)*(p-x2)*(p-x3));                       //面积公式算面积 
	cout<<s<<endl;   
}
/*函数功能:析构函数*/
Triangle::~Triangle()
{
	cout<<"Successfully！";
} 
int main()
{
	Triangle  tri;                                        //创建对象 
	tri.set(3,3,4);                                       //赋值三角形
	tri.area();                                           //计算三角形面积
	tri.Shape();                                          //判断三角形类型 
	return 0; 
} 
