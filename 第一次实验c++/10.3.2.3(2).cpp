#include <iostream>
using namespace std;
main()
{
	int num,cnt=0;                                 //num ��������  cnt ��¼���� 
	cout<<"���ã�������һ������:";
	cin>>num;
	if(num%3==0)
	cnt++;
	if(num%5==0)
	cnt+=2;
	if(num%7==0)
	cnt+=4; 
	switch(cnt)
	{
		case 0 :cout<<"���ܱ�3��5��7����";break; 
		case 1 :cout<<"�ܱ�3����";break;
		case 2 :cout<<"�ܱ�5����";break;
		case 3 :cout<<"�ܱ�3��5����";break;
		case 4 :cout<<"�ܱ�7����";break;
		case 5 :cout<<"�ܱ�3��7����";break;
		case 6 :cout<<"�ܱ�5��7����";break;
		case 7 :cout<<"�ܱ�3��5��7����";break;
	}  
} 
