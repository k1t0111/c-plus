#include <iostream>
#include <iomanip> 
#define  N 3.14159 
using namespace std;
main()
{
	int r;
	float l,s;                         // r Բ�İ뾶 l Բ���ܳ� s Բ����� 
	cout<<"���ã�����������Բ�İ뾶";
	cin>>r;
	l=2*N*r;                          //�����ܳ������ 
	s=N*r*r;
	cout<<setprecision(2)<<"���Ľ��Ϊ��"<<endl<<setiosflags(ios::fixed<<"�ܳ���l="<<l<<endl<<"���:s="<<s; 
}
