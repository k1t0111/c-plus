#include <iostream>
using namespace std;
main()
{
	char op;                                       //op ������ĸ 
	cout<<"����������һ����ĸ"; 
	cin>>op;
	if(op>='A'&&op<='Z')
	{
		cout<<"��������Ǵ�д��ĸ,��Сд��ĸΪ:";  //�жϴ�Сд����ת�� 
		printf("%c",op+32); 
	}
	else
	{
		cout<<"���������Сд��ĸ,���д��ĸΪ:";
		printf("%c",op-32); 
	}	 
} 
