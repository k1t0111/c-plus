#include <iostream>
using namespace std;

class Person                    //����һ����  Person   �� 
{
public:
	void get(int num1,string name1,string sex1,int old1); 
/*��������: չʾ���ݳ�Ա��Ϣ*/ 
	void display()
	{
		cout<<"���:"<<num<<"  ����:"<<name<<"  �Ա�:"<<sex<<"���䣺"<<old<<endl; 
	}

private:
    string name,sex;           //����˽�г�Ա  ���� name �Ա� sex ��� num ���� old   
 	int num,old; 
}; 
/*��������: ��ȡ���ݳ�Ա��ֵ ���� ��ʼ��*/
void Person::get(int num1,string name1,string sex1,int old1)
{
	num=num1;                  //��� ���� �Ա� ���� ����ֵ   
 	name=name1;
	sex=sex1;
	old=old1; 
}

class  Student:public Person 
{
public:
	Student(string major1,int score1);
/*��������:  չʾ���ݳ�Աרҵϵ��ͳɼ�*/
	void display_1()
	{
		cout<<"רҵϵ��:"<<major<<"�ɼ�:"<<score<<endl; 
	} 

private:
	string major;               //˽�г�Ա major רҵϵ�� score �ɼ� 
	int score; 
}; 
/*��������: ���캯�� ��ʼ�� ϵ�� �� �ɼ�*/ 
Student::Student(string major1,int score1)
{
	major=major1;               //רҵ�ͳɼ���ʼ�� 
	score=score1; 
}

class Teacher:public Person
{
public:
	                            //���캯��  ְ�� �� �������� 
	Teacher(string title1,string department1)
	{
		title=title1;
		department=department1;
	} 
	void display_1()            //���ְ�ƺͲ��� 
	{
		cout<<"ְ��:"<<title<<"����:"<<department<<endl; 
	}
	
private:
	string title,department;   //˽�г�Ա  ְ�� �� ���� 
};
int main()
{
	Student s1("��Ϣ��ȫ",100); //����һ��ѧ������
								//����һ����ʦ����
	Teacher t1("����","�о���Ժ");
	cout<<"ѧ����Ϣ����:"<<endl;
	s1.get(1001,"mike","��",19);//��ѧ����Ϣ��ֵ 
	s1.display();               //չʾѧ����Ϣ 
	s1.display_1();
	cout<<"��ʦ��Ϣ����:"<<endl;
	t1.get(1001,"jenson","��",45);//����ʦ��Ϣ��ֵ 
	t1.display();               //չʾ��ʦ��Ϣ 
	t1.display_1();                   
} 
