// 08. 写一个函数，找出给定字符串中数字字符（即’0’—‘9’这10个数字）的个数（如字符串“olympic2000”中数字字符的个数为4个。
// 函数的原型为： int CalcDigital(char *str); 
// 函数参数：str为所要处理的字符串。 
// 函数返回值：所给字符串中数字字符的个数。
#include <iostream>
using namespace std;

int CalcDigital(char *str)
{
	int count = 0;
	for (int i = 0; *(str+i); ++i)
	{
		if (*(str+i) >= '0' && *(str+i) <= '9')
		{
			++count;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	char str[] = "olympic2000";
	cout << CalcDigital(str);
	return 0;
}
