#include <iostream>
using namespace std;
int main()
{
	int num[10]={12,21,23,2,3,5,6,4,3,7} ;        //����ʮ������ 
	int *p=num,i,j,temp;                          //ij����ѭ�� *pָ�� temp�滻 
	for(i=1;i<10;i++)                             //ð������ 
	{
		for(j=0;j<10-i;j++)
		{
			if(*(p+j)>*(p+j+1))                   //��С��������
			{
				temp=*(p+j);                      //�滻 
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp; 
			}
		} 
	} 
	for(i=0;i<10;i++)
	cout<<num[i]<<endl; 
	return 0; 
} 
