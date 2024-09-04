#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a=25;
	cout<<"12345678901234567890"<<endl; // 输出 20 列作为列标记
	cout<<a<<endl;
	cout<<setw(8)<<a<<endl;
	cout.fill('#');
	cout<<setw(8)<<a<<endl;
	cout.setf(ios::left);
	cout<<setw(8)<<a<<endl;
	cout.width(12);
	cout.setf(ios::right);
	cout<<setfill('@')<<a<<endl;
	cout<<a<<endl;
	cout.width(4) ;
	cout.fill('*');
	cout<<a<<endl;
	cout<<"width:"<<cout.width()<<endl;
	cout<<"hex:"<<hex<<a<<endl;
	cout<<"oct:"<<oct<<a<<endl;
	cout.setf(ios::dec);
	cout<<a<<endl;
	double f=123.456789;
	cout<<f<<endl;
	cout<<setprecision(8)<<f<<endl;
	cout<<fixed<<f<<endl;
	cout<<setprecision(8)<<f<<endl;
	cout<<setprecision(4)<<f<<endl;	
	cout<<scientific<<f<<endl;
}
