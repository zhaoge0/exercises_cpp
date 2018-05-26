// 07. 写一个函数找出一个整数数组中，第二大的数。
// 这是一个不改变原数组的解法
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[5]={9,7,7},min = a[0];
	for(int i=0;i<5;i++)
	{
		if(a[i]<min) min = a[i];
	}
	int max=min,second=min;
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			second = max;
			max = a[i];
		}else if(a[i]>second &&a[i]!=max)
		{
			second = a[i];
		}
	}
	 cout << second;
	return 0;
}
