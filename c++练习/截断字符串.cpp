#include <iostream>
#include <string> 
using namespace std;
void cut(string s1,int start,int end);                      //�����ضϺ��� 
main()
{
	string s1;                                         //s1�����ַ��� start end �ض����� 
	int start,end;
	cout<<"���ã����������������ַ�����������Ҫ�ضϵ�����"<<endl;
	cin>>s1>>start>>end;                               
	cut(s1,start-1,end-1); 
}
void cut(string s1,int start,int end)
{
	int i;
	cout<<"���ضϵ��ַ���Ϊ:";                         //i ����ѭ�� 
	for(i=start;i<=end;i++)                            //ѭ������ض��ַ���                    
	cout<<s1[i]; 
}
