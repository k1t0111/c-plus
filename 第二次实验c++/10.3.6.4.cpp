#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[100];                       //s1�����ַ���  pָ��s1 
	char *p=s1 ;
	cout<<"������һ���ַ���:";
	gets(s1);
	int i;                              //i ����ѭ�� 
	int length,upper=0,lower=0,phy=0,space=0 ;   
	                                    // length���� upper��д��ĸ lower Сд��ĸ phy���� space�ո�
	length=strlen(s1);
	for(i=0;i<length;i++)            
	{
		if(*(p+i)>='A'&&*(p+i)<='Z')    //�жϴ�д��ĸ 
		upper++;
		else
		if(*(p+i)>='a'&&*(p+i)<='z')    //�ж�Сд��ĸ
		lower++;
		else
		if(*(p+i)>='0'&&*(p+i)<='9')    //�ж�����
		phy++;
		else 
		space++;                        //�ж������ַ�		 
	}
	cout<<"����!�����ַ�������һ����"<<length<<"���ַ�"<<endl;
	cout<<"��д��ĸ��"<<upper<<endl;
	cout<<"Сд��ĸ��"<<lower<<endl;
	cout<<"���֣�"<<phy<<endl; 
	cout<<"�����ַ���"<<space<<endl;
	return 0; 
} 
