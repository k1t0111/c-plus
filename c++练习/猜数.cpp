//������
#include <iostream>
#include <string> 
#include <time.h> 
using namespace std;
main()
{
	int n,guess;                                     //n������������� guess ��ʾ�û��µ�����
	srand((unsigned) time(NULL));
	n=rand()%100;                                    //ϵͳ����������� 
	cout<<"�������������ϣ����������Ĳ²��";
	cin>>guess;
	if(guess>n);
	{
		cout<<"Guess�� It is too big��" ;
	}
	if(guess==n)
	cout<<"Congratulations��You guess right��";
	if(guess<n) 
	cout<<"Guess ��It is too small";
	string str3,str1="���",str2="����"; 
	str3=str2+str1; 
	cout<<str1<<str2<<str3; 
} 
