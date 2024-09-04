#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction(int _numerator, int _denominator=1);    	// ���캯��
	Fraction operator+(const Fraction& fra) const; 		// ��Ա��������ص�+�����
	friend Fraction operator- (const Fraction &fra, const Fraction &frb); // ��Ԫ��������ص� - �����
	friend ostream & operator<<(ostream &os, const Fraction &fra);
	Fraction operator*(const Fraction& fra) const;		// ��Ա��������ص�*�����
	Fraction operator/(const Fraction& fra) const;		// ��Ա��������ص�/�����
private:
	int numerator;     // ����
	int denominator;   // ��ĸ
	static int Abs(const int &n) { return n<0?-n:n;};  // ����ֵ
};
Fraction Fraction::operator+(const Fraction& rv) const
	{
		return Fraction(numerator* rv. denominator+rv. numerator* denominator, denominator*rv. denominator); // (a/b)+(c/d)=(a*d+b*c / b*d)
	}
Fraction operator-(const Fraction &fra, const Fraction & frb)
{
	return Fraction(fra. numerator * frb. denominator - frb. numerator * fra. denominator,
	fra. denominator*frb. denominator);
}
ostream & operator<<(ostream &os, const Fraction &fra)
{ 
	if (fra. numerator==0) os<<0;
	else 
	if(fra.numerator<0) os<<"("<<fra.numerator<<"/"<<fra.denominator<<")";
	else os<<fra. numerator<<"/"<<fra.denominator;
	return os;
}
Fraction::Fraction(int _numerator, int _denominator)
{
	if ( _denominator==0) 
	{
	cout<<"��ĸ����Ϊ 0"<<endl;
	return ;
	}
	if((_numerator>=0 && _denominator>0)||(_numerator<=0 && _denominator<0))
	{
		this->numerator=Abs(_numerator);
		this->denominator=Abs( _denominator);
	}		
	else 
	{
		this->numerator=-Abs(_numerator);
		this->denominator=Abs( _denominator);	
	}
}
/*�������ܣ������*������ ʵ�����������ĳ˷�����*/ 
Fraction Fraction::operator*(const Fraction& fra) const 
{
	return Fraction(numerator*fra.numerator,denominator*fra.denominator); 
}
/*�������ܣ������\������ ʵ�����������ĳ�������*/ 
Fraction Fraction::operator/(const Fraction& fra) const 
{
	return Fraction(numerator*fra.denominator,denominator*fra.numerator); 
}
int main()
{
	Fraction fra1(1,2);    /* ����һ������ */
	Fraction fra2(1,3);    /* ������һ������ */
	cout<<fra1<<"+"<<fra2<<"="<<fra1+fra2<<endl;
	cout<<fra1<<"-"<<fra2<<"="<<fra1-fra2<<endl;
	cout<<fra1<<"*"<<fra2<<"="<<fra1*fra2<<endl;
	cout<<fra1<<"/"<<fra2<<"="<<fra1/fra2<<endl;
	return 0;
}
