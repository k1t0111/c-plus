#include <iostream>
#include <math.h> 
using namespace std;
main()
{
	cout<<"���ã�������һ��������:";
	int n,N;                                      //n������������  N��ʾ2���ݵĽ�� 
	cin>>n;
	int i;                                        //����ѭ�� 
	for(i=1;;i++)
	{
		N=pow(2,i);                               //���2��n���� 
		if(N>n)
		break;                                    //����ѭ�� 
	} 
	cout<<N;                                      
	 
}
