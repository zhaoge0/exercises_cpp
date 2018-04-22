#include <iostream>
#include <cmath>
using namespace std;
//03. n一个整数(小于10万），它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
bool is_sqnum(long num)
{
	if (sqrt(num) == int(sqrt(num)))
	{
		return true;
	}else 
	{
		return false;
	}
}
int main(int argc, char const *argv[])
{
	for (long i = -100; i < 100000; ++i)
	{
		if (is_sqnum(i+100)&&is_sqnum(i+168))
		{
			cout << "this number is " << i << endl;
		}
	}
	return 0;
}
