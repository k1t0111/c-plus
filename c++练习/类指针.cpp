#include <iostream>
using namespace std;
class num                     //��Ŀ�� 
{
public:
	num(int i1,int pi1)
	{
		i=i1;
		pi=pi1; 
	} 
	int i,pi;                  //i,pһ���������� 
	int *p=&i;                 //pָ��ָ��i
	void  get()
	{
		cout<<i<<endl<<pi;
	} 
};
int main()
{
	int num::*p=&num::pi;
	num s1(9,11);              //����һ������ 
	cout<<s1.*p<<endl<<*s1.p<<endl;  //ʵ������p��ʾ���� 
	void (num::*p1)()=&num::get;
	(s1.*p1)();                    //ָ����ָ�� 
	return 0; 
} 
