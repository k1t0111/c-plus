#include  <iostream>
using namespace std;

class Time                       //����һ��ʱ���� 
{
private:
	int h,m,s;                   //h ʱ m �� s �� 
public:
	Time(int,int,int);           //���캯�� 
	void display()               //�����������ʱ�� 
	{
		cout<<"    "<<h<<":"<<m<<":"<<s<<endl; 
	}
};
Time::Time(int h1,int m1,int s1)
{
	h=h1;                        //���캯����ʼ������ 
	m=m1;
	s=s1; 
}
int main()
{
	Time time1(14,25,25),time2(13,12,12);  
	                            //����time1 time2 ����ʱ��
	time1.display();	
	time2.display();
	return 0;						 
} 
