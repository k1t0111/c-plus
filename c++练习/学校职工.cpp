
/*ѧУ��Աϵͳ*/
/*������:��� �ܿ�˧*/ 

#include <iostream> 
#include <string>

using namespace std;

class Student                     //����һ�� ѧ���� 
{

public:
	Student(string name1,int old1,int score1);
								  //���캯�� ��ʼ�� 
	int display();                //չʾ��Ϣ 
	
private:
	int score,old;
	string name;
	
};

/*��������:ѧ�����캯����Ϣ��ʼ��*/
Student::Student(string name1,int old1,int score1)
{
	name=name1;                   //ѧ����Ϣ��ʼ�� 
	old=old1;
	score=score1;	
}

/*��������:չʾѧ��ȫ����Ϣ*/
int Student::display()
{
	cout<<"����:"<<old<<endl;
	cout<<"����:"<<name<<endl;
	cout<<"����:"<<score<<endl; 
	return 1;
}

class Employee                    //����һ��ְ����
{

public:
	Employee(string name1,int old1,string level1); 
								  //���캯�� ��ʼ�� 
	int display();                //չʾ��Ϣ 
	
protected:
	int old;
	string name,level;
	
};

/*��������:ְ��������Ϣ��ʼ��*/
Employee::Employee(string name1,int old1,string level1)
{
	name=name1;                   //ְ����Ϣ��ʼ��
	old=old1;
	level=level1;
}

/*��������:չʾְ��*/
int Employee::display()
{
	cout<<"����:"<<old<<endl;
	cout<<"����:"<<name<<endl;
	cout<<"ְ��:"<<level<<endl;
	return 1;
}

class Teacher:public Employee     //����һ����ʦ��
{
	 
public:
	Teacher(string name1,int old1,string level1,string subject1);
						          //���캯����ʼ��
	int display(); 
private:
	string subject;
}; 

/*��������:�����๹�캯����ʼ��*/
Teacher::Teacher(string name1,int old1,string level1,string subject1):
Employee(name1,old1,level1)
{
	 subject=subject1; 
} 

/*��������:չʾ��ʦ��Ϣ*/
int Teacher::display()
{
	cout<<"����:"<<old<<endl;
	cout<<"����:"<<name<<endl;
	cout<<"ְ��:"<<level<<endl;
	cout<<"��ѧѧ��:"<<subject<<endl;
	return 1; 
}

int main()
{
	Student s1("�ܷ�",20,100);    //����ѧ������ չʾѧ����Ϣ 
	s1.display(); 
	Employee e1("��ѩ÷",36,"��ѧ�鳤");
								  //����ְ������ չʾ������Ϣ
	e1.display();
	Teacher t1("��Цѩ",35,"��ʦ","Ӣ��"); 
								  //������ʦ���� չʾ������Ϣ
	t1.display(); 
}  
