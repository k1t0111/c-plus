#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction(int _numerator, int _denominator=1);    	// 构造函数
	Fraction operator+(const Fraction& fra) const; 		// 成员运算符重载的+运算符
	friend Fraction operator- (const Fraction &fra, const Fraction &frb); // 友元运算符重载的 - 运算符
	friend ostream & operator<<(ostream &os, const Fraction &fra);
	Fraction operator*(const Fraction& fra) const;		// 成员运算符重载的*运算符
	Fraction operator/(const Fraction& fra) const;		// 成员运算符重载的/运算符
private:
	int numerator;     // 分子
	int denominator;   // 分母
	static int Abs(const int &n) { return n<0?-n:n;};  // 绝对值
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
	cout<<"分母不能为 0"<<endl;
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
/*函数功能：运算符*的重载 实现两个分数的乘法运算*/ 
Fraction Fraction::operator*(const Fraction& fra) const 
{
	return Fraction(numerator*fra.numerator,denominator*fra.denominator); 
}
/*函数功能：运算符\的重载 实现两个分数的除法运算*/ 
Fraction Fraction::operator/(const Fraction& fra) const 
{
	return Fraction(numerator*fra.denominator,denominator*fra.numerator); 
}
int main()
{
	Fraction fra1(1,2);    /* 定义一个分数 */
	Fraction fra2(1,3);    /* 定义另一个分数 */
	cout<<fra1<<"+"<<fra2<<"="<<fra1+fra2<<endl;
	cout<<fra1<<"-"<<fra2<<"="<<fra1-fra2<<endl;
	cout<<fra1<<"*"<<fra2<<"="<<fra1*fra2<<endl;
	cout<<fra1<<"/"<<fra2<<"="<<fra1/fra2<<endl;
	return 0;
}
