#include <iostream>
using namespace std;

class Time                                  //����һ��ʱ���� 
{
public:
	Time(int h,int m,int s)
	{
		hours=h;                            //���캯�� ʱ �� ��  ����ֵ                      
		minutes=m;
		seconds=s;
	}
	void display()                          //������ݳ�Ա 
	{
		cout<<"����ʱ��:"<<hours<<"ʱ  "<<minutes<<"��  "<<seconds<<"��"<<endl;
	}

protected:                                  //h m s ʱ���� ��������Ա 
	int hours, minutes, seconds;
};
class Date                                  //����һ��ʱ����� 
{
public:
	Date(int m,int d,int y)                 //���캯�� ���ڸ���ֵ 
	{
		month=m;                           
		day=d;
		year=y;
	}
	void display_1()	                    //չʾ���� 
	{	
		cout<<"��������:"<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
	}	

protected:
int month,day,year;                         //��������Ա  �� ��  �� 
};

class birthtime:public Date,public  Time    //��̳� birthtime �̳� date time 
{
public:
	birthtime(string name);                 
	void display_2()                        //�������� �����Ϣ 
	{
		cout<<"����:"<<name<<endl; 
	}
	void get()
	{
		cout<<"������С�����������գ�";
		cin>>year>>month>>day; 
		cout<<"������С������ʱ���룺";
		cin>>hours>>minutes>>seconds;
	} 
	
private:
	string name; 
};
/*��������: ���캯�� ��ʼ��*/
	birthtime::birthtime(string name):Date(1,12,1),Time(1,1,1)
	{
		this->name=name;
	}
int main()
{
	birthtime baby1("�");                //� ����
	baby1.get();                            //��ȡ��Ϣ 
	baby1.display_2();                      //չʾ��Ϣ 
	baby1.display_1();
	baby1.display();                      
	return 0; 
} 
