//��������ַ�������С�������� 
#include <stdio.h>
#include <string.h> 
main()
{
	char str[5][20],str1[20];                  //str �����ַ���  i j����ѭ�� str1 ������ 
	int i,j,d; 
	printf("���ã���������������ַ�����\n"); 
	for(i=0;i<5;i++)                           //�����ַ��� 
	gets(str[i]); 
	printf("\n\n");                            //��� 
	for(i=0;i<4;i++)
	{
		d=i; 
		for(j=d+1;j<5;j++) 
		{
			if(strcmp(str[d],str[j])>0)        //ѡ�����򷨴�С�������� 
			d=j; 
		}
		if(d!=i)
		{
			strcpy(str1,str[i]);
			strcpy(str[i],str[d]);
			strcpy(str[d],str1);
		}
	}
	for(i=0;i<5;i++)                            //���������ַ��� 
	puts(str[i]);
} 
