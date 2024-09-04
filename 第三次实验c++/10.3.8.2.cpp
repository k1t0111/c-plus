#include<string>
#include<iostream>
using namespace std;

class City
{
protected:
	string cityName;
public:
	City()=default;                                    //默认生成构造函数 
	City(string  _cityName):cityName( _cityName ){};
	void Watch() const
	{	
		if(cityName=="小王") 
		cout<<this->cityName<<" 没有家"<<endl;
		else
		if(cityName=="小张")
		cout<<this->cityName<<" 住在成都"<<endl;
		else
		cout<<this->cityName<<" 住在雅安"<<endl;
		 
	}
};
class Chengdu :public City
{
public:
	Chengdu(string _cityName):City( _cityName) {}
	void Watch( ) const
	{
		cout<<this->cityName<<" 住在成都"<<endl;
	}
};
class Yaan :public City
{
public:
	Yaan(string _cityName) :City( _cityName) {}
	void Watch() const
	{
		cout<<this->cityName<<" 住在雅安"<<endl;
	}
};
int main( )
{
	City city("小王"), *Pointer =nullptr;
	Chengdu chengdu("小张");
	Yaan yaan("小李");
	Pointer =&city;
	Pointer->Watch( );
	Pointer =&chengdu;
	Pointer->Watch();
	Pointer =&yaan;
	Pointer->Watch();
	return 0;
}
