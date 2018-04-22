// 17. 求数列1，3，3，3，5，5，5，5，5，7，7，7，7，7，7，7……。求：第40项的值；值为17的第1个数是数列中第几项？

#include <iostream>
using namespace std;

int f(int n)
{
	int sum = 1,i;
	for (i = 1;n > sum+i-1 || n < sum; i+=2) sum += i;
	return i;
}

int main(int argc, char const *argv[])
{
	int i = 1;
	cout << "f(40) = " << f(40) << endl;
	while (f(i) != 17) i++;
	cout << "f(" << i << ") = 17" ; 
	return 0;
}