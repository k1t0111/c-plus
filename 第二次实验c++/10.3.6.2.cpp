#include <iostream>
using namespace std;
int main()
{
	int num[10]={12,21,23,2,3,5,6,4,3,7} ;        //保存十个数字 
	int *p=num,i,j,temp;                          //ij控制循环 *p指针 temp替换 
	for(i=1;i<10;i++)                             //冒泡排序 
	{
		for(j=0;j<10-i;j++)
		{
			if(*(p+j)>*(p+j+1))                   //从小到大排序
			{
				temp=*(p+j);                      //替换 
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp; 
			}
		} 
	} 
	for(i=0;i<10;i++)
	cout<<num[i]<<endl; 
	return 0; 
} 
