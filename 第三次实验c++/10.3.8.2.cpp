#include<string>
#include<iostream>
using namespace std;

class City
{
protected:
	string cityName;
public:
	City()=default;                                    //Ĭ�����ɹ��캯�� 
	City(string  _cityName):cityName( _cityName ){};
	void Watch() const
	{	
		if(cityName=="С��") 
		cout<<this->cityName<<" û�м�"<<endl;
		else
		if(cityName=="С��")
		cout<<this->cityName<<" ס�ڳɶ�"<<endl;
		else
		cout<<this->cityName<<" ס���Ű�"<<endl;
		 
	}
};
class Chengdu :public City
{
public:
	Chengdu(string _cityName):City( _cityName) {}
	void Watch( ) const
	{
		cout<<this->cityName<<" ס�ڳɶ�"<<endl;
	}
};
class Yaan :public City
{
public:
	Yaan(string _cityName) :City( _cityName) {}
	void Watch() const
	{
		cout<<this->cityName<<" ס���Ű�"<<endl;
	}
};
int main( )
{
	City city("С��"), *Pointer =nullptr;
	Chengdu chengdu("С��");
	Yaan yaan("С��");
	Pointer =&city;
	Pointer->Watch( );
	Pointer =&chengdu;
	Pointer->Watch();
	Pointer =&yaan;
	Pointer->Watch();
	return 0;
}
