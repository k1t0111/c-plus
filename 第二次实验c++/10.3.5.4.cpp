#include <iostream>
using namespace std;
int main()
{
	int n,i,j;                               //n保存矩阵长度信息  i,j控制循环
	cout<<"请输入您需要几阶矩阵？";
	cin>>n;  
	int num[n][n];                           //创建二维数组矩阵
	for(i=0;i<n;i++)                         //嵌套循环初始化矩阵 
	{
		printf("请输入%d行的数据",i+1);
		for(j=0;j<n;j++)                     //每一行 
			cin>>num[i][j];
	}  
	int cnt1,cnt2,min=100,max=0;             //cnt记录下标 max最大值 min最小值	 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)                     //打擂法求最值 
		{
			if(num[i][j]<=min)
			{
				min=num[i][j];               //最小值 以及下标 
				cnt1=i*10+j;                     
			}
			if(num[i][j]>=max)
			{
				max=num[i][j];               //最大值 以及下标 
				cnt2=i*10+j;                     
			}
		}
		
	}
	int sum=0;                               //sum 求和 
	if(n%2==0)                               //n为偶数求和 
	{
		for(i=0,j=n-1;i<n;i++,j--)
		sum=sum+num[i][i]+num[i][j] ;        //对角求和 
	}
	else                                     //n为奇数求和
	{
		for(i=0,j=n-1;i<n;i++,j--)
		sum=sum+num[i][i]+num[i][j];         //对角求和 
		sum=sum-num[n/2][n/2];               //减去重复数据 
	}
	cout<<"矩阵对角线之和为:"<<sum<<endl;
	cout<<"最大值以及下标为:"<<max<<"    "<<cnt2<<endl; 
	cout<<"最小值以及下标为:"<<min<<"    "<<cnt1<<endl;
	return 0; 
}
