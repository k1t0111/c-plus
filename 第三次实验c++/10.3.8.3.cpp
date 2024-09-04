#include <iostream>
using namespace std;

class Point                      //定义一个点类 
{
private:
	int x,y;                     //直角坐标系坐标代替点 
	
public:
	Point(){}                    //缺省构造函数 
	Point(int x1,int y1)         //带参数构造函数初始化 
	{
		x=x1;                
		y=y1; 
	} 
	Point(Point & p)            //拷贝构造函数  对象初始化   
	{
		x=p.x;
		y=p.y; 
	} 
	int Getx();                 //获取数据成员x 
	int Gety();                 //获取数据成员y
	void Display()
	{							//展示全部数据成员 
		cout<<"x："<<x<<endl<<"y:"<<y<<endl;       
	}
	bool operator==(Point &);	//判断两个点对象是否相等
	friend Point & operator+(const Point &p1,const Point &p2); 
	                            //将两个点对象相加
	friend Point & operator-(const Point &p1,const Point &p2);
								//将两个点对象相减 
	
};
/* 函数功能:获取数据成员x  */
int Point::Getx()
{
	return x;
}
/* 函数功能:获取数据成员y  */
int Point::Gety()
{
	return y; 
}
/*	函数功能:判断两个点对象是否相等	*/
bool Point::operator==(Point &p)
{
	if(x==p.x&&y==p.y)          //两个对象的数据成员对比 
	return true;
	else
	return false;
}
/*	函数功能:将两个点对象相加	*/
Point & operator+(const Point &p1,const Point &p2)
{
	Point p3; 
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
							  //返回对象的加和 
	return p3;
}
/*	函数功能:将两个点对象相减	*/
Point & operator-(const Point &p1,const Point &p2)
{
							  //返回对象的减差 
	Point p3; 
	p3.x=p1.x-p2.x;
	p3.y=p1.y-p2.y;
							  //返回对象的加和 
	return p3;
}
int main()
{
							 //创建三个点对象 
	Point  P1(1,2),P2(2,3),P3(P1);
	P1.Display();            //实验 三个输出函数
	cout<<"获取x y值:" ;
	cout<<P1.Getx();
	cout<<"   "; 
	cout<<P1.Gety()<<endl; 	
	P3.Display();            //测试P3 拷贝构造函数 
	P3=P1+P2;                //测试加减号运算符重载 
	P3.Display();
	P3=P1-P2; 
	P3.Display();
	if(P1==P2)               //测试对象是否相等 
	{
		cout<<"两个对象相等哦！"<<endl;
	}
	else
	{
		cout<<"两个对象不相等哦！"<<endl;	
	}	 
	return 0;
}
