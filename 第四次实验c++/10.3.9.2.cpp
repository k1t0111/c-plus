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
		cout<<"文件创建失败 . \n";
		exit(0);
	}
	srand((unsigned int)time(NULL)); // 	初始化随机数种子
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
		cout<<"文件没找到或打开错误 . \n";
		exit(0) ;
	}
	int count =0,d=0;
	while (infile>>d)
	{
		cout<<d<<endl;
		count++;
	}
		cout<<"文件里共有"<<count<<"个数据"<<endl;
}

int main()
{
	string filename="D:\\2.txt";
	writeFile(filename);
	readFile(filename); 
} 
