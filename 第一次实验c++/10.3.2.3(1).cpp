/*if-else��*/
#include <iostream>
using namespace std;
main()
{
	int num;                                   //num��������  
	cout<<"���ã�������һ��������";
	cin>>num;
	if(num%3==0)                               //�ж��ܷ��������ٷֱ����� 
	{
		if(num%5==0)                           //�ж��ܷ��������ٷֱ����� 
		{
			if(num%7==0)                       //�ж��ܷ��������ٷֱ����� 
				cout<<"�ܱ�3��5��7����"; 
			else
				cout<<"�ܱ�3��5����"; 
		}
		else
		{
			if(num%7==0)
				cout<<"�ܱ�3��7����"; 
			else
				cout<<"�ܱ�3����"; 
		} 
	} 
	else
	{
		if(num%5==0)
		{
			if(num%7==0)
				cout<<"�ܱ�5��7����"; 
			else
				cout<<"�ܱ�5����"; 
		}
		else
		{
			if(num%7==0)
				cout<<"�ܱ�7����"; 
			else
				cout<<"���ܱ�3��5��7����"; 
		} 
	} 
	 
}
