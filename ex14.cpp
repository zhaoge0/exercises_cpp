// 14. 十制数字a,b,c,d和e，求满足式子：abcd*e=dcba（a非0，e非0非1）的四位数中： 
// （1）共有多少个？ 
// （2）最小的abcd； 
// （3）与之相对应的e。
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int count = 0;
	int result[2];
	for (int a = 9; a >= 1; --a)
	{
		for (int b = 9; b >= 0; --b)
		{
			for (int c = 9; c >= 0; --c)
			{
				for (int d = 9; d >= 0; --d)
				{
					for (int e = 9; e >= 2; --e)
					{

						if ((a*1000+b*100+c*10+d)*e == d*1000+c*100+b*10+a)
						{
							++count;
							result[0] = a*1000+b*100+c*10+d;
							result[1] = e;
						}
					}
				}
			}
		}
	}
	cout << "there are totally " << count << "numbers." << endl
		 << "the smallst abcd = " << result[0] << endl 
		 << "e = " << result[1];
	return 0;
}