// 24. 有一个分数序列：1/2，2/3，3/5，5/8，8/13，13/21。求：
// （1）这个序列的前20项之和；
// （2）第15项的值。
#include <iostream>
#include <cmath>
using namespace std;

int factor(long a,long b)
{
	if (a == 0) return b;
	if (b == 0) return a;
	if (a < 0) a = abs(a);
	if (b < 0) b = abs(b);
	if (a < b)
	{
		long t = a;
		a = b;
		b = t;
	}
	int r = a % b;
	while(r)
	{
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}

class frac
{
	// value = a/b
	long a;
	long b;
public:
	friend ostream& operator<< (ostream &output,const frac f);
	frac& operator+=(const frac&);
	frac(long a,long b):a(a),b(b)
	{
		simplify();
	}
	frac(const frac &f)
	{
		this->a = f.a;
		this->b = f.b;
		simplify();
	}
	double getval()
	{
		return a/double(b);
	}
	void simplify()
	{
		int fac = factor(a,b);
		if (a != 0 && b!= 0)
		{
			a /= fac;
			b /= fac;
		}
	}
};

ostream& operator<< (ostream &output,const frac f)
{
	if (f.b == 1)
	{
		output << f.a;
	}else if (f.b == 0)
	{
		output << "undefined";
	}else
	{
	output << f.a << "/" << f.b;
	}
	return output;
}

frac& frac::operator+=(const frac &f)
{
	a = a*f.b + f.a*b;
	b = b * f.b;
	simplify();
	return *this;
}

long fib(long n)
{
	if (n < 2) return 1;
	else return fib(n-1)+fib(n-2);
}





int main()
{
	frac an(0,0);
	frac sum(fib(1),fib(2));
	frac f(fib(15),fib(16));
	for (int i = 2; i < 20; ++i)
	{
		an = frac(fib(i),fib(i+1));
		sum += an;
	}
	cout << "sum(20) = " << sum << '(' << sum.getval() << ')' << endl;
	cout << f << '(' << f.getval() << ')' <<endl;
	return 0;
}