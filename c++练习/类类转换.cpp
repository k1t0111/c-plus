/*
**********************************
 c++ ����ʵ�� ������ת�� ��������
  ��������ת�� ������  
                        
					 --����:�ܿ�˧
**********************************
*/ 

#include <iostream>

using namespace std;

class Student                      //���� ѧ���� 
{
public:
	Student(int);
    void display(); 
	operator double()
	{
		return name; 
	} 
private:
	int name;                      
};

/*��������:ѧ���๹�캯��*/
Student::Student(int name1)
{
	name=name1;	
}

/*��������:��ӡѧ�������Ϣ*/
void Student::display()
{
	cout<<name<<endl; 
}
 
/*��������:ʵ�ֻ�������ת��������*/
void change(Student s1)
{
	s1.display(); 
} 

int main()
{
	change(1);                    //ִ��ת������ ����-->���� 
	Student s2(2),s3(3);          //��������ѧ������
	Student s4((double)s2+(double)s3); 
	                              //����ѧ���� ����ת����ֵ
	s4.display(); 
} 
 
 
 
 
 
