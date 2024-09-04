//输出一百以内的所有素数 
#include <stdio.h>
main()
{
	int i,j;                        
	for(i=2;i<100;i++)             //嵌套循环试验素数 
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)             //判断有无因数 
			break; 
		}
	    if(i==j)                   //判断是否为素数 
		printf("%4d",i); 
	} 
	
} 
