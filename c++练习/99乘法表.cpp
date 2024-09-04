#include <iostream> 
#include <iomanip>
using namespace std;
main()
{
	int i,j;                                  //i,j Ñ­»·²ÎÊý
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<' '<<'*'<<' '<<j<<' '<<'='<<' '<<setfill(' ')<<setw(5)<<setiosflags(ios::left)<<i*j;
			if(i==j)
			cout<<endl; 
		}
	} 
} 
