#include <iostream>
using namespace std;
int main()
{
	int n,i,j;                               //n������󳤶���Ϣ  i,j����ѭ��
	cout<<"����������Ҫ���׾���";
	cin>>n;  
	int num[n][n];                           //������ά�������
	for(i=0;i<n;i++)                         //Ƕ��ѭ����ʼ������ 
	{
		printf("������%d�е�����",i+1);
		for(j=0;j<n;j++)                     //ÿһ�� 
			cin>>num[i][j];
	}  
	int cnt1,cnt2,min=100,max=0;             //cnt��¼�±� max���ֵ min��Сֵ	 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)                     //���޷�����ֵ 
		{
			if(num[i][j]<=min)
			{
				min=num[i][j];               //��Сֵ �Լ��±� 
				cnt1=i*10+j;                     
			}
			if(num[i][j]>=max)
			{
				max=num[i][j];               //���ֵ �Լ��±� 
				cnt2=i*10+j;                     
			}
		}
		
	}
	int sum=0;                               //sum ��� 
	if(n%2==0)                               //nΪż����� 
	{
		for(i=0,j=n-1;i<n;i++,j--)
		sum=sum+num[i][i]+num[i][j] ;        //�Խ���� 
	}
	else                                     //nΪ�������
	{
		for(i=0,j=n-1;i<n;i++,j--)
		sum=sum+num[i][i]+num[i][j];         //�Խ���� 
		sum=sum-num[n/2][n/2];               //��ȥ�ظ����� 
	}
	cout<<"����Խ���֮��Ϊ:"<<sum<<endl;
	cout<<"���ֵ�Լ��±�Ϊ:"<<max<<"    "<<cnt2<<endl; 
	cout<<"��Сֵ�Լ��±�Ϊ:"<<min<<"    "<<cnt1<<endl;
	return 0; 
}
