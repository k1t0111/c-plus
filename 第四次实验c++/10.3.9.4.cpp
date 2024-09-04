#include <iostream>
#include <fstream> 
#include <cstring>

using namespace std;

int main()
{
	int i,n=0,cnt=0;
	float sum=0;
	ifstream f1("D:\\1.txt"); 
	try
	{
		 
		if(!f1)
		{
			throw 1;
		}
	}
	catch(int)
	{
		cout<<"fail!";
	}
	for(i=0;;i++) 
	{
		if(f1>>n)
		{
			cnt++; 
			sum+=n;
		}
		if(f1.eof())
		break; 
	}
	cout<<"总数:"<<cnt<<endl<<"和:"<<sum<<endl<<"平均值:"<<sum/(float)cnt; 
	f1.close();	
} 
