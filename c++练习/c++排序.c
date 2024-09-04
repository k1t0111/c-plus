//输入五个字符串，从小到大排序 
#include <stdio.h>
#include <string.h> 
main()
{
	char str[5][20],str1[20];                  //str 保存字符串  i j控制循环 str1 交换法 
	int i,j,d; 
	printf("您好，请输入您的五个字符串！\n"); 
	for(i=0;i<5;i++)                           //输入字符串 
	gets(str[i]); 
	printf("\n\n");                            //间隔 
	for(i=0;i<4;i++)
	{
		d=i; 
		for(j=d+1;j<5;j++) 
		{
			if(strcmp(str[d],str[j])>0)        //选择排序法从小到大排序 
			d=j; 
		}
		if(d!=i)
		{
			strcpy(str1,str[i]);
			strcpy(str[i],str[d]);
			strcpy(str[d],str1);
		}
	}
	for(i=0;i<5;i++)                            //输出排序后字符串 
	puts(str[i]);
} 
