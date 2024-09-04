#include <iostream> 
using namespace std;
main()
{
	int sum,num,x1,x2,x3,x4;                          //sum 保存和 num保存四位整数  x 保存各位数 
	cout<<"请输入一个四位整数：";
	cin>>num;                                        
	x1=num/1000;                                      //计算各位数字上的数 
	x2=(num-1000*x1)/100;
	x3=(num-1000*x1-100*x2)/10;
	x4=num%10;
	sum=x1+x2+x3+x4;                                  //各位数求和 
	cout<<"您的求和结果为:"<<sum; 
	 
	                                 
} 
