#include  <iostream>
using namespace std;
int hcf(int u,int v)
{
	int a,b,t,r; 
	if(u>v)
	{
		t=u;
		u=v;
		v=t;
	}        
	a=u;
	b=v;
	while ((r=b%a)!=0)
	{
		b=a;
		a=r;
	}
	return(a);
}
int lcd(int u, int v, int h )
{
    return(u*v / h ) ;
}
main()
{
	int u, v, h, l ;
	cout<<"请输入两个正整数" ;
	cin>>u>>v;
	h=hcf(u, v);
	cout<<"hcf="<<h<<endl;
	l=lcd (u, v, h );
	cout<<"lcd ="<<l<<endl;
}
