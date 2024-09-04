#include <iostream>

using namespace std;

/*创建动态分配二级数组*/
int main()
{
	int i,j,n=0; 
	int **p=new int*[3];
	for(i=0;i<3;i++)
	{
		p[i]=new int[3]; 
	} 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			n++; 
			p[i][j]=n; 
			
		}
	}
	cout<<p[0][0]; 
	for(i=0;i<10;i++)
	{
		delete[] p[i]; 
	} 
	delete[] p; 
}
