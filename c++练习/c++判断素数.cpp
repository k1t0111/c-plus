//���һ�����ڵ��������� 
#include <stdio.h>
main()
{
	int i,j;                        
	for(i=2;i<100;i++)             //Ƕ��ѭ���������� 
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)             //�ж��������� 
			break; 
		}
	    if(i==j)                   //�ж��Ƿ�Ϊ���� 
		printf("%4d",i); 
	} 
	
} 
