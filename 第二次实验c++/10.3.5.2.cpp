#include<iostream>
#include<string>
using namespace std;
main()
{
	int i=0, base, n, j, num[200];
	cout<<"����һ������:";
	cin>>n;
	cout<<"�������:";
	cin>>base;
	do
	{
		i++;
		num[i]=n % base;
		n =n / base;
	}while (n!=0);
	cout<<"���:";
	for (j=i;j>=1;j-- )
	cout<<num[j];
	cout<<endl;
}
