#include <iostream>
#include <string> 
using namespace std;
class Student                                    //����ѧ���� 
{
private:                               
	string  num;                                 //ѧ�� 
	string  name;                                //���� 
	string  sex;                                 //�Ա� 
	string  old;                                 //���� 
	string  major;                               //רҵ 
	string  phonenum;                            //�绰�� 
public:
	Student(){}                                  //���캯�� 
	void setnum(string num1)                     //����ѧ�� 
	{
		num=num1; 
	}
	void setname(string name1)                   //�������� 
	{
		name=name1; 
	}	
	void setsex(string sex1)                     //�����Ա� 
	{
		sex=sex1; 
	}	
	void setold(string old1)                     //�������� 
	{
		old=old1; 
	}	
	void setmajor(string major1)                 //����רҵ 
	{
		major=major1;  
	}
	void setphonenum(string phonenum1)           //���õ绰�� 
	{
		phonenum=phonenum1; 
	}
	void getnum()                                //���ѧ�� 
	{
		cout<<"ѧ��:"<<num<<endl;             
	}
	void getname()                               //������� 
	{
		 cout<<"����:"<<name<<endl;
	}	
	void getsex()                                //����Ա� 
	{
		cout<<"�Ա�:"<<sex<<endl;
	}	
	void getold() 			                     //������� 
	{
		cout<<"����:"<<old<<endl; 
	}	
	void getmajor()    			                 //���רҵ 
	{
		cout<<"רҵ:"<<major<<endl;  
	}
	void getphonenum()       			         //��õ绰�� 
	{
		cout<<"�绰��:"<<phonenum<<endl; 
	}
	~Student(){cout<<"Successfully!";}            //�������� 
	 
}; 
int main()
{
	Student s1;                                 //�������� s1
	s1.setname("��Сʤ");
	s1.setnum(" 20180001");
	s1.setold(" 18 ��"); 
	s1.setphonenum("16100011234"); 
	s1.setsex("��");
	s1.setmajor("�����רҵ");
	s1.getname();
	s1.getnum();
	s1.getold(); 
	s1.getphonenum(); 
	s1.getsex();
	s1.getmajor();
	return 0; 
} 
