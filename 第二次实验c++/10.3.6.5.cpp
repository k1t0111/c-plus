#include <iostream>
using namespace std;
class Student                             //ѧ������ 
{
private: 
	int  score;                           //score �ɼ� 
public:
	long num;                             //num ѧ��
	Student()     					      //���캯��   
	{
		 num=0;                           //��ʼ�� 
		 score=0; 
	}
	void set(long num1,int score1);       //��Ա���� ����ɼ����ֵ 
	int displace();                       //��Ա����  ���ֳɼ� 
	~Student()                            //�������� 
	{
	} 
};
/*��������:Ϊ����ֵ*/
void Student::set(long num1,int score1)
{
	num=num1;                             //���ݳ�Ա��ֵ 
	score=score1; 
}
/*��������:չ�ֳɼ�*/ 
int Student::displace()
{
	return score;                         //��Ա����  ����˽�����ݳ�Ա 
}
/*��������:�����ֵ*/
void max(Student s[10]) 
{
	int i,mac=0,cnt;                      //���޷����ֵ iѭ��  cnt�����±� 
	for(i=0;i<10;i++)
	{
		if(s[i].displace()>mac)                //���޷��Ƚ� 
		{
			mac=s[i].displace();
			cnt=i;                        //��¼�±� 
		}
	}
	cout<<"�ɼ����Ϊ:"<<mac<<endl<<"ѧ��Ϊ��"<<s[cnt].num; 
}
int main()
{
	Student s[10];                        //����ʮ������
	s[0].set(200001,80);                  //����ֵ 
	s[1].set(200002,85);
	s[2].set(200003,82);
	s[3].set(200004,87);
	s[4].set(200005,78);
	s[5].set(200006,45);
	s[6].set(200007,80);
	s[7].set(200008,50);
	s[8].set(200009,98);
	s[9].set(200010,40);
	max(s);                              //�����ɼ� 
	return 0; 
} 
