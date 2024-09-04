#include <iostream>
#include <math.h> 
using namespace std;
main()
{
	cout<<"您好！请输入一个人整数:";
	int n,N;                                      //n保存输入整数  N表示2的幂的结果 
	cin>>n;
	int i;                                        //控制循环 
	for(i=1;;i++)
	{
		N=pow(2,i);                               //穷举2的n次幂 
		if(N>n)
		break;                                    //跳出循环 
	} 
	cout<<N;                                      
	 
}
