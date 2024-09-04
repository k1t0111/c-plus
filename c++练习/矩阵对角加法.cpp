#include<iostream>
using namespace std;
int findMax(int a[5][5],int n);//找最大值下标
int findMin(int a[5][5],int n);//找最小值下标
int Sum(int a[5][5],int n);//求对角线元素值之和

main()
{
	int a[5][5],n,i,j;
	cout<<"n= ";
	cin>>n;
	cout<<"请输入n*n个整数:";
	for(i=0;i<n;i++)
    for(j=0;j<n;j++)
	{ 
	  cin>>a[i][j];
	}
    findMax(a,n); 
	findMin(a,n);
	cout<<"对角线元素之和sum="<<Sum(a,n)<<endl;
	return 0;
}

int findMax(int a[5][5],int n)
{
  int x=0,y=0,i,j;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if(a[x][y]<=a[i][j])
  {
	x=i;y=j;
  } 
  	cout<<"最大值为第 "<<x<<"行";
	cout<<"第 "<<y<<"个"<<endl;
  return 0;
}


int findMin(int a[5][5],int n)
{
  int x=0,y=0,i,j;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if(a[x][y]>a[i][j])
  {
	x=i;y=j;
  }
  cout<<"最小值为第 "<<x<<"行";
	cout<<"第 "<<y<<"个"<<endl;
  return 0;
}


int Sum(int a[5][5],int n)
{
  int sum=0,i;
  for(i=0;i<n;i++)
     sum=sum+a[i][i]+a[i][n-1-i];
    if(n%2!=0)
    sum=sum-a[(n-1)/2][(n-1)/2];
  return sum;
}
