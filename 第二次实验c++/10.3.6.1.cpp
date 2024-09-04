#include<iostream>
using namespace std;
main()
{
int i, m[ ]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
int *p =m+3;
cout<<*p<<endl; 
cout<<++*p<<endl; 
cout<<*p<<endl; 
cout<<*++p<<endl;
cout<<*p<<endl;
cout<<*p++<<endl ;
cout<<*p<<endl; 
cout<<(*p)++<<endl;
cout<<*p<<endl; 
cout<<++*p++<<endl;
cout<<*p<<endl; 
cout<<(++*p)++<<endl;
cout<<*p<<endl; 
p+=2; cout<<*p<<endl;
p =&m[6];
cout<<*p<<endl; 
i=*p+4; cout<<i<<endl; 
i=*(p-=3); cout<<i<<endl; 
cout<<*p<<endl; 
*(p++)=9;
cout<<*p<<endl; 
cout<<*(p+1)<<endl; 
}
