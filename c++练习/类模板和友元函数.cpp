/*#include <iostream>
using namespace std;
template<class T>                 //��ģ����� 
class test
{
private:                          //˽�г�Ա T 
	T a;
public:
	test(T a1)                    //���캯�� 
	{
		a=a1; 
	}
	T display()                  //չʾ�������� 
	{
		cout<<a<<endl;
		return a; 
	}
};
class date;                       //����ǰ���� 
class time
{
private:
	int s1;                       //˽�г�Աs1 
public:
	time(int s11)                 //���캯����ʼ�� 
	{
		s1=s11; 
	}
	void display(date &t)         //����date����� 
	{
		cout<<t.s2<<endl;
		cout<<s1<<endl; 
	}
};
class date                         //������� 
{
private:
	int s2;                        //˽�г�Աs2 
public:
	date(int s22)
	{
		s2=s22; 
	} 
	                               //��time��display������Ϊ��Ԫ���� 
	friend void time::display(); 
};
int main()
{
	test<int> op1(1);              //test�����
	date  op2(2);                  //date���Ķ��� 
	time  op3(3);                  //time���ĺ���
	op1.display();                //��ģ���Ա����ʵ��
	op3.display() 
	return 0; 
} */
#include <iostream>
using namespace std;
class Date;                     //��Date�����ǰ��������
class Time
{                          //����Time��
public:
	Time(int,int,int);                //�������캯��
	void display(Date &);            //display�ǳ�Ա����,�β���Date����������
private:
	int hour;
    int minute;
    int sec;
};
class Date
{                             //����Date��
public:
	Date(int,int,int);                    //�������캯��
friend void Time��display(Date &); //����Time�е�display����Ϊ�������Ԫ��Ա����
private:
   int month;
   int day;
   int year;
};
Time��Time(int h,int m,int s)           //������Time�Ĺ��캯��
{
   hour=h;
   minute=m;
   sec=s;
}
void Time��display(Date &d)       //display������������ꡢ�¡��պ�ʱ���֡���
 {
   cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
 //����Date������е�˽������
   cout<<hour<<":"<<minute<<":"<<sec<<endl;     //���ñ�������е�˽������
 }
Date��Date(int m,int d,int y)          //��Date�Ĺ��캯��
{
	month=m;
  	day=d;
  	year=y;
}
int main()
{
   Time t1(10,13,56);             //����Time�����t1
   Date d1(12,25,2004);           //����Date�����d1
   t1.display(d1);                //����t1�е�display����,ʵ����Date�����d1
   return 0;
}

