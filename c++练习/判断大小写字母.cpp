/*�ж��Ƿ�Ϊ��Сд��ĸ*/ 
#include <iostream>
using namespace std;
main()
{
	char op;                                          //op �����ַ� 
	cout<<"���ã�������һ������:";
	cin>>op;
	if(op>='A'&&op<='Z')
	cout<<"���� ���������һ����д��ĸ";
	else
	if(op>='a'&&op<='z')
	cout<<"���ã����������һ��Сд��ĸ";
	else
	cout<<"���ã�������Ĳ���һ����ĸŶ��"; 
	 
} 
