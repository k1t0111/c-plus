#include<iostream>
using namespace std;
main()
{
	const int N=10;
	int a[N];
	int s, i, j, t;
	for (i=0; i<N; i++)
	if (i % 2)
	a[i]=i*i;
	else
	a[i]=100- (i / 2)*(i / 2);
	for (i=0; i<N; i++)
	cout<<a[i]<<" ";
	cout<<endl;
	s =0;
	for (i=0; i<N; i++)
	s =s+a[i];
	cout<<"sum of a="<<s<<endl;
	for (i=0; i<N; i++)
	{
	t =a[i];
	j =i - 1;
	while (j>=0 && t>a[j])
	{
		a[j+1]=a[j];
		j-- ;
	}
	a[j+1]=t;
	}
	for (i=0; i<N; i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
