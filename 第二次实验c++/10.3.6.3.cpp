#include <iostream>
using namespace std;
int main()
{
	int i,num[10],*p;               // iѭ�� num���鱣��ʮ������    pָ��������� 
	p=num;
	cout<<"���ã�������ʮ������"<<endl; 
	for(i=0;i<10;i++)
		cin>>*(p+i); 
	int  max=0,min=100,cnt1,cnt2;  //���޷� ��Сֵmin ���ֵmax  cnt��¼�±� 
	for(i=0;i<10;i++)
	{
		if(*(p+i)>max)             //���ֵ 
		{
			max=*(p+i);
			cnt1=i; 
		}
		if(*(p+i)<max)             //��Сֵ 
		{
			min=*(p+i);
			cnt2=i; 
		}
	} 
	cout<<"���ֵ��"<<max<<"�±�:"<<cnt1<<endl; 
	cout<<"��Сֵ��"<<min<<"�±�:"<<cnt2<<endl;
	return 0; 
} 
