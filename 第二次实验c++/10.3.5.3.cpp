#include <iostream>
using namespace std;
main()
{
	int cnt1,cnt2,min=100,max=0;                 	//cnt ��¼�±� min��Сֵ max���ֵ
	int i,num[10]={12,1,45,4,24,5,32,3,90,65};      //i����ѭ��  num����ʮ������ 
	for(i=0;i<10;i++)
	{
		if(num[i]<=min)                             //���޷�����Сֵ 
		{
			min=num[i];
			cnt1=i;                                 //��¼�±� 
		} 
	}
	for(i=0;i<10;i++)
	{
		if(num[i]>=max)                             //���޷������ֵ 
		{
			max=num[i];
			cnt2=i;                                 //��¼�±� 
		} 
	}  
	cout<<"���鱣������ֵΪ:"<<max<<"   "<<"�±�Ϊ:"<<cnt2<<endl; 
	cout<<"���鱣�����СֵΪ:"<<min<<"   "<<"�±�Ϊ:"<<cnt1<<endl;
}
