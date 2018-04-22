#include <iostream>
using namespace std;

//求Sn=a+aa+aaa+aaaa+…+aa…a（n个a）之值，其中a是一个数字，n表示a的位数。 例如：2+22+222+2222 (此时a=2, n=4）。

int nx(int x,int n)
{
	if (n < 2)
	{
		return 2;
	}
	else
	{
		return nx(x,n-1)*10 + 2;
	}
}

int main(int argc, char const *argv[])
{
	int sum = 0,count;
	cin >> count;
	for (int i = 1; i <= count; ++i)
	{
		sum += nx(2,i);
	}
	cout << sum << endl;
	return 0;
}
