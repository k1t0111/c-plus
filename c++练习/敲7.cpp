#include <iostream>
using namespace std;
main()
{
	int n,i;                                 //n保存输入的整数 
	cout<<"请输入一个整数(1-100):";
	cin>>n; 
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		cout<<"pass"<<endl;
		else
		cout<<i<<endl; 
	} 	 
} 
