#include <iostream>
using namespace std;
main()
{
	int judge;                                   //judge �������� 
	cout<<"���ã����������ĵ�Ӱ���֣�ʮ���ƣ�";
	cin>>judge;
	if(judge>=0&&judge<=2)
	cout<<"Crap��"; 
	else
	if(judge>=3&&judge<=5) 
	cout<<"Uh...";
	else 
	if(judge>=6&&judge<=8)
	cout<<"Not bad!";
	else
	cout<<"Excellent��";
	  
} 
