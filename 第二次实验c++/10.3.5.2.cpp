#include<iostream>
#include<string>
using namespace std;
main()
{
	int i=0, base, n, j, num[200];
	cout<<"输入一个整数:";
	cin>>n;
	cout<<"输入基数:";
	cin>>base;
	do
	{
		i++;
		num[i]=n % base;
		n =n / base;
	}while (n!=0);
	cout<<"结果:";
	for (j=i;j>=1;j-- )
	cout<<num[j];
	cout<<endl;
}
