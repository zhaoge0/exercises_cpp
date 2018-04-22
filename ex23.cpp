// 23. 所有能被13整除又能被17整除且末位不是偶数的三位数有几个？最大的一个？

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int total = 0, t, i;
	for (i = 100; i < 1000; ++i)
	{
		if (i%13==0 && i%17==0 && i%10%2==1)
		{
			++total;
			t = i;
		}
	}
	cout << "there are totally " << total << " numbers." << endl
		 << "the maximume one is " << t << ".\n";
	return 0;
}