// 24. 有一个分数序列：1/2，2/3，3/5，5/8，8/13，13/21。求：
// （1）这个序列的前20项之和；
// （2）第15项的值。
#include <iostream>
#include <cmath>
using namespace std;


long fib(long n)
{
	if (n < 2) return 1;
	else return fib(n-1)+fib(n-2);
}

double an(int n)
{
	return fib(n)/double(fib(n-1));
}




int main()
{
	double sum = 0;
	for (int i = 1; i < 21; ++i)
	{
		sum += an(i);
	}
	cout << "sum(20) = " << sum << endl;
	cout << "an(15) = " << an(15) << endl;
	return 0;
}