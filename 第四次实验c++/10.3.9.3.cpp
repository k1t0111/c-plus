/*�ļ���  ��ɾ���*/

#include <iostream>
#include <cstring> 
#include <fstream>
#include <stdlib.h> 

using namespace std;

int n1,n2,n3;                   //ȫ�ֱ��� n �ֱ��ʾ ���� ѧ�� ���� ����

class Student 
{
private:
	string name;                //˽�ܳ�Ա  ���� ѧ�� ���� 
	string num;
	string old;
	
public:                         //���г�Ա���� 
	Student(string,string,string);
	int* Get_N(); 
	void Write_File(); 
}; 

/*��������:  Student ��Ĺ��캯�� ��ʼ����Ա*/
Student::Student(string name1,string num1,string old1)
{
	name=name1;
	num=num1;
	old=old1; 
}

/*��������:��ȡ���ݳ�Ա���ļ��еı��泤��*/
int* Student::Get_N()
{
	static int n[3];                   //���鱣�����鳤������ 
	n[0]=strlen(&name[0]);
	n[1]=strlen(&num[0]);
	n[2]=strlen(&old[0]);
	return n;
}

/*��������:������д���ļ�*/
void Student::Write_File()
{

	fstream f1;   			    //���ļ�
	f1.open("D:\\student.dat",ios::out); 
	f1<<name<<num<<old;         //д����Ϣ
	f1.close(); 
}

/*��������:���ļ���ȡ��ѯ��Ϣ*/
void Seek_Info()
{
	int g;                      //�ж��Ƿ�ѭ��
	fstream f1;   		        //���ļ�
	f1.open("D:\\student.dat",ios::in);
	string  str1;               //str1�ж�ѡ��  str2�����ȡ����
	char str2[10];
	do
	{
	cout<<"�����ѯ��һ����Ϣ?(����)(ѧ��)(����)\n"; 
	cin>>str1;
	if(str1=="����")            //if�ṹ�ж� ����  ���Բ�ѯ��� 
	{
		f1.seekg(std::ios::beg);
		f1.read(str2,n1);        
		puts(str2); 
	}
	if(str1=="ѧ��")
	{
		f1.seekg(std::ios::beg); 
		f1.ignore(n1,'/');      //����ǰn1���ַ�
		f1.read(str2,n2);
		puts(str2); 
	} 
	if(str1=="����")
	{
		f1.seekg(std::ios::beg); 
		f1.ignore(n1+n2,'/');   //����ǰn1+n2���ַ�
		f1.read(str2,n3);
		puts(str2); 
		f1.clear(std::ios::goodbit);
	}
		cout<<"�Ƿ����?(1)\n"; 
		cin>>g; 
	}while(g==1);

	f1.close();
	
} 
int main()
{
							    //����һ��ѧ������� 
	Student s1("mike","20221","12");
	int *n;                     //�������ݳ��ȵ�ָ��
	n=s1.Get_N();
	n1=n[0];                    //Ϊȫ�ֱ�����ʼ�� 
	n2=n[1];
	n3=n[2]; 
	s1.Write_File();            //������д���ļ�
	cout<<"����,�������ʲô�����أ���ѯ��Ϣ(1).ɾ����Ϣ(2).�˳�(3)\n";
	int judge;                  //judge�ж���Ϣ
	cin>>judge; 
	switch(judge)
	{
								//��֧�ṹ����ѡ�� 
		case 1 :Seek_Info();break;
		//case 2 :Del_Info();break; 
		case 3 :exit(0);
	} 
	return 0;
}
