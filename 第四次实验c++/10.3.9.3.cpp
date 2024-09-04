/*文件的  增删查改*/

#include <iostream>
#include <cstring> 
#include <fstream>
#include <stdlib.h> 

using namespace std;

int n1,n2,n3;                   //全局变量 n 分别表示 姓名 学号 年龄 长度

class Student 
{
private:
	string name;                //私密成员  姓名 学号 年龄 
	string num;
	string old;
	
public:                         //共有成员函数 
	Student(string,string,string);
	int* Get_N(); 
	void Write_File(); 
}; 

/*函数功能:  Student 类的构造函数 初始化成员*/
Student::Student(string name1,string num1,string old1)
{
	name=name1;
	num=num1;
	old=old1; 
}

/*函数功能:获取数据成员在文件中的保存长度*/
int* Student::Get_N()
{
	static int n[3];                   //数组保存三组长度数据 
	n[0]=strlen(&name[0]);
	n[1]=strlen(&num[0]);
	n[2]=strlen(&old[0]);
	return n;
}

/*函数功能:将数据写入文件*/
void Student::Write_File()
{

	fstream f1;   			    //打开文件
	f1.open("D:\\student.dat",ios::out); 
	f1<<name<<num<<old;         //写入信息
	f1.close(); 
}

/*函数功能:从文件读取查询信息*/
void Seek_Info()
{
	int g;                      //判断是否循环
	fstream f1;   		        //打开文件
	f1.open("D:\\student.dat",ios::in);
	string  str1;               //str1判断选项  str2保存读取数据
	char str2[10];
	do
	{
	cout<<"您想查询哪一个信息?(姓名)(学号)(年龄)\n"; 
	cin>>str1;
	if(str1=="姓名")            //if结构判断 所需  回显查询结果 
	{
		f1.seekg(std::ios::beg);
		f1.read(str2,n1);        
		puts(str2); 
	}
	if(str1=="学号")
	{
		f1.seekg(std::ios::beg); 
		f1.ignore(n1,'/');      //忽略前n1个字符
		f1.read(str2,n2);
		puts(str2); 
	} 
	if(str1=="年龄")
	{
		f1.seekg(std::ios::beg); 
		f1.ignore(n1+n2,'/');   //忽略前n1+n2个字符
		f1.read(str2,n3);
		puts(str2); 
		f1.clear(std::ios::goodbit);
	}
		cout<<"是否继续?(1)\n"; 
		cin>>g; 
	}while(g==1);

	f1.close();
	
} 
int main()
{
							    //创建一个学生类对象 
	Student s1("mike","20221","12");
	int *n;                     //保存数据长度的指针
	n=s1.Get_N();
	n1=n[0];                    //为全局变量初始化 
	n2=n[1];
	n3=n[2]; 
	s1.Write_File();            //将数据写入文件
	cout<<"您好,您想进行什么操作呢？查询信息(1).删除信息(2).退出(3)\n";
	int judge;                  //judge判断信息
	cin>>judge; 
	switch(judge)
	{
								//分支结构进入选择 
		case 1 :Seek_Info();break;
		//case 2 :Del_Info();break; 
		case 3 :exit(0);
	} 
	return 0;
}
