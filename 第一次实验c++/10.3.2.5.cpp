/*һ�����ڵ�����*/
#include <iostream>
#include <iomanip> 
using namespace std;
main()
{
	int i,j;                           //i��j����ѭ�� 
	for(i=2;i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break; 
		}
		if(i==j)
		cout<<setw(4)<<i; 
	} 
} 
