#include <iostream>
using namespace std;

class Person                      //����һ������ 
{
private:
	string name,sex;              //�������� name ���� sex�Ա� 
	
public:
	void get(string name1,string sex1)
	{
		sex=sex1;                 //���캯����ʼ�� ���� �Ա� 
		name=name1; 
	}
	void display()                //չʾ���� 
	{
		name="�";
		sex="��"; 
		cout<<"����:"<<name<<"    �Ա�:"<<sex<<endl; 
	}
	 
protected:
	int old;                      //������Ա   old ���� 
}; 
class Student:public Person       //�̳������� ѧ�� 
{
private:
	double num;                   //˽�г�Ա num ѧ�� 

public:
	void get(int old1,double num1)
	{
		num=num1;
		old=old1; 
	} 
	void display_1()             //չʾ ����  ѧ�� ��Ա 
	{
		cout<<"����:"<<old<<"   ѧ��:"<<num<<endl;	
	}	
};
int main()
{
	Person  p1;   		    //���� �Ķ��� p1
	p1.get("�","��"); 
	p1.display();
	Student s1;                 //ѧ������� s1
	s1.get(12,1001); 
	s1.display();
	s1.display_1(); 
} 
