#include <iostream>
using namespace std;

class Teacher                    //����һ����ʦ��  
{
protected:
	string name,sex,address;     //˽�г�Ա  ����  �Ա� ��ַ  
	int old;                     //���� 
	long long phonenum;               //�绰 
	string title;                //ְ�� 
	 
public:
	                             //���캯�� ��ʼ�� 
	Teacher(string name1,string sex1,string address1,string title1,int old1,long long phonenum); 
	void display(); 
 
};

/*��������: Teacher��Ĺ��캯�����г�ʼ��*/
Teacher::Teacher(string name1,string sex1,string address1,string title1,int old1,long long phonenum1)
{
	name=name1;
	sex=sex1;
	address=address1;
	title=title1;
	old=old1;
	phonenum=phonenum1; 
}

/*��������:չʾ����� ���ݳ�Ա*/
void Teacher::display()
{
	cout<<"����:"<<name<<"   "<<"�Ա�:"<<sex<<"   "<<"����:"<<old<<endl;
	cout<<"ְ��:"<<title<<"  "<<"��ַ:"<<address<<"   "<<"�绰����:"<<phonenum<<endl; 
}

class Cadre                      //����һ���ɲ���  
{
protected:
	string name,sex,address;     //˽�г�Ա  ����  �Ա� ��ַ  
	int old;                     //���� 
	long long phonenum;          //�绰 
	string post;                 //ְ�� 
	 
public:
	                             //���캯�� ��ʼ�� 
	Cadre(string name1,string sex1,string address1,string post1,int old1,long long phonenum); 
	void display(); 
 
};

/*��������: Cadre��Ĺ��캯�����г�ʼ��*/
Cadre::Cadre(string name1,string sex1,string address1,string post1,int old1,long long phonenum1)
{
	name=name1;
	sex=sex1;
	address=address1;
	post=post1;
	old=old1;
	phonenum=phonenum1; 
}

/*��������:չʾ����� ���ݳ�Ա*/
void Cadre::display()
{
	cout<<"����:"<<name<<"   "<<"�Ա�:"<<sex<<"   "<<"����:"<<old<<endl;
	cout<<"ְ��:"<<post<<"  "<<"��ַ:"<<address<<"   "<<"�绰����:"<<phonenum<<endl; 
}

                                    //����һ����ʦ�ɲ��� ,�̳�  Teacher Cadre  
class Teacher_Cadre:public Teacher,public  Cadre             
{
	
private:
	int wages;

public:
	Teacher_Cadre(string name1,string sex1,string address1,
	string post1,int old1,long long phonenum,string title1,int wages);
	void show();
}; 

/*��������: �����๹�캯��  ��ʼ�����ݳ�Ա*/ 
Teacher_Cadre::Teacher_Cadre(string name1,string sex1,string address1,
	string post1,int old1,long long phonenum,string title1,int wages1):Teacher(
	name1,sex1,address1,title1,old1,phonenum),
	Cadre(name1,sex1,address1,post1,old1,phonenum)
{
	wages=wages1;
}

/*��������:չ�� ������ ���ݳ�Ա*/
void Teacher_Cadre::show()
{
	Teacher::display();            // ��������� ����Teacher ���display   
	cout<<"ְ��:"<<post<<"   "<<"нˮ:"<<wages<<endl;
	 
}

int main()
{								  //����һ����ʦְλ��Ķ���t1
	Teacher_Cadre t1("��ѩ÷","Ů","����","��ʦ",35,15327906564,"�����鳤",7000);           
	cout<<"����һ��ְ������Ϣ:"<<endl;
	t1.show();
	
	return 0;
}
