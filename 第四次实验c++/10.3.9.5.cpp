#include <iostream>
#include <fstream> 
#include <cstdio>
 
using namespace std;

struct student
{
	char name[10];
	int old;
	long num; 
}; 

void Seek_Info()
{
	student s; 
	int num; 
	cout<<"��Ҫ�ڼ�λ����Ϣ?";
	cin>>num;
	ifstream f1("D:\\student.dat");
	if(!f1)
	{
		cout<<"fail to open !"; 
	}
	if(num==2)
	f1.seekg(sizeof(s),ios::beg);
		f1.read((char *)&s,sizeof(s));
		cout<<"����:"<<s.name<<endl;
		cout<<"����:"<<s.old<<endl;
		cout<<"ѧ��:"<<s.num<<endl; 
	
	f1.close(); 
}

void Del_Info()
{
	int num; 
	student s[2]; 
	cout<<"��ϣ��ɾ���Ǹ���Ա����Ϣ��";
	cin>>num;
	ifstream f1("D:\\student.dat");
	if(!f1)
	{
		cout<<"fail to open !"; 
	}
	f1.read((char *)&s[0],sizeof(s[0])); 
	f1.read((char *)&s[1],sizeof(s[1]));
	f1.close();
	ofstream f2("D:\\2.dat");
	if(num==1)
	f2.write((char *)&s[1],sizeof(s[1]));
	else
	f2.write((char *)&s[0],sizeof(s[0])) ;
	f2.close();
	remove("D:\\student.dat");
	rename("D:\\2.dat","D:\\student.dat");
	 
}

int main() 
{
	student s[2]={{"�ܷ�",11,111},{"mike",12,222}};
	fstream f1("D:\\student.dat",ios::in|ios::out);
	if(!f1)
	{
		cout<<"fail to open !"; 
	}	
	f1.write((char *)&s[0],sizeof(s[0])); 
	f1.write((char *)&s[1],sizeof(s[1])); 
	f1.close();
	int judge,op;
	do
	{
	cout<<"��Ҫ������Ϣ(1)����ɾ����Ϣ(2)��";
	cin>>judge;
	if(judge==1)
	Seek_Info();
	else
	Del_Info(); 
	cout<<"����?(1)";
	cin>>op; 
	}while(op==1); 
	 
	
}

