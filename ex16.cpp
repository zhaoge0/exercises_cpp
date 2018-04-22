// 16. 有3个红球，5个白球，6个黑球，从中任意取出8个球，且其中必须有白球，请求出共有多少种取法?

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int count = 0;
	for (int red = 0; red < 4; ++red)
	{
		for (int white = 1; white < 6; ++white)
		{
			for (int black = 0; black < 7; ++black)
			{
				if (white + red + black == 8) ++count; // 此处认为同种颜色的球是完全相同的，取法只涉及每种球的数量
			}
		}
	}
	cout << count;
	return 0;
}