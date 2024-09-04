#include <iostream>
using namespace std;
class num                     //数目类 
{
public:
	num(int i1,int pi1)
	{
		i=i1;
		pi=pi1; 
	} 
	int i,pi;                  //i,p一个整形数据 
	int *p=&i;                 //p指针指向i
	void  get()
	{
		cout<<i<<endl<<pi;
	} 
};
int main()
{
	int num::*p=&num::pi;
	num s1(9,11);              //创建一个对象 
	cout<<s1.*p<<endl<<*s1.p<<endl;  //实验类外p表示方法 
	void (num::*p1)()=&num::get;
	(s1.*p1)();                    //指向函数指针 
	return 0; 
} 
