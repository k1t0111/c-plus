/*
*********************************************
 在时间复杂度在 O(n) 设计算法
 计算 1！+2！+ .... n！
  
 					--作者:周俊帅
********************************************* 
*/


#include <iostream> 

using namespace std;


/*函数功能: 实现 计算 1-n 的阶乘求和*/
void function(int n)
{
	int item=1,sum=0;                   // item 保存单个数字阶乘 sum 保存阶乘之和 
	for(int i=1;i<=n;i++)
	{
		item*=i;
		sum+=item; 
	} 
	cout<<"您的结果为:"<<sum; 
} 

int main()
{
	int n;                              // n 保存上限 
	cout<<"请输入n的大小:"<<endl;
	cin>>n;
	function(n);                        //执行函数 function 
} 
