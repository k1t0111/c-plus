#include <iostream>
#include <string>
using namespace std;
/*�������ܣ���ʮ����������ת��Ϊʮ����*/ 
void HtoD(string str)
{
	int n; 
	n=stoi(str,0,16);
	cout<<n; 
}
main()
{
	string hs;                             //ʹ��string�� �����ַ��� 
	cout<<"������һ��ʮ��������:" ;
	cin>>hs;
	HtoD(hs);                              // ���ú�����ʾת���Ľ��;
}
