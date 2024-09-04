/*一百以内的质数*/
#include <iostream>
#include <iomanip> 
using namespace std;
main()
{
	int i,j;                           //i，j控制循环 
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
