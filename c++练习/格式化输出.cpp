#include <iostream>
#include <iomanip> 
using namespace std;

/*格式化输出*/
int main()
{
	
	float i=111.111111;              //实验数字 
	cout<<setiosflags(ios::left)<<setiosflags(ios::oct)<<setprecision(4)<<setw(9)<<setfill('*')<<i; 
	return 0; 
}
 


