#include <iostream>
#include <iomanip> 
using namespace std;

/*��ʽ�����*/
int main()
{
	
	float i=111.111111;              //ʵ������ 
	cout<<setiosflags(ios::left)<<setiosflags(ios::oct)<<setprecision(4)<<setw(9)<<setfill('*')<<i; 
	return 0; 
}
 


