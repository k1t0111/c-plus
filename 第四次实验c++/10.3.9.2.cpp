#include<iostream>
#include<fstream>
#include<sys/time.h>
#include <stdlib.h>

using namespace std;

void writeFile(string filename)
{
	ofstream outfile(filename.c_str());
	if(!outfile)
	{
		cout<<"�ļ�����ʧ�� . \n";
		exit(0);
	}
	srand((unsigned int)time(NULL)); // 	��ʼ�����������
	for(int i=0; i<10; i++)
	{
		outfile<<rand()%1000<<endl;
	}
}

void readFile(string filename)
{
	ifstream infile(filename.c_str());
	if(!infile)
	{
		cout<<"�ļ�û�ҵ���򿪴��� . \n";
		exit(0) ;
	}
	int count =0,d=0;
	while (infile>>d)
	{
		cout<<d<<endl;
		count++;
	}
		cout<<"�ļ��ﹲ��"<<count<<"������"<<endl;
}

int main()
{
	string filename="D:\\2.txt";
	writeFile(filename);
	readFile(filename); 
} 
