/*������ж�*/
#include <iostream>
using namespace std;
main()
{
	int year;                                              //������������ 
	cout<<"���ã���ӭ����С����"<<endl<<"������һ������";
	cin>>year;
	if(year%4==0&&year%100!=0)
	cout<<year<<"  is a leap year��";
	else 
	cout<<year<<"  is not a leap year��";
} 
