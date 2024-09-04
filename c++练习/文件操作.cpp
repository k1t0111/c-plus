/*ÎÄ¼þ²Ù×÷*/

#include <iostream>
#include <fstream>
#include <cstring> 
using namespace std;

int main()
{
	fstream f1("D:\\1.txt",ios::out);
	char a[2][10]={"nihao","buhao"};
	f1<<a[0]<<a[1];
	//string  A="hello,world£¡"; 
	/*f1.put(A[0]);
	f1<<"àËàËàËàË";
	f1.close(); 
	fstream  f2("D:\\2.txt",ios::in);
	string B;
	f2>>B;
	cout<<B;
	char a;
	if(f2.eof())
	{
		cout<<"ÄªÎ¤À­"; 
	} 
	else
	{
		a=f2.peek(); 
	cout<<a; 
	} */
	return 0; 
} 
