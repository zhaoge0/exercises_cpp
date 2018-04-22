/*
06. 编写一个自定义函数：int f( int M, int N)，f( )的功能是：
对给定的正整数M和N，找出满足方程“7x+4y=M”的正整数解中x是偶数且y是奇数的解，
其中：x,y属于[1，N]的范围。 要求：若M和N不都是正整数，则结束函数并返回－1；
只有M和N都是正整数时，才继续求解操作，用二重循环进行求解： 
（1）在函数中输出满足条件的正整数解x和y， 
（2）并且使函数值返回满足条件的正整数解的组数。
*/

#include <iostream>
using namespace std;

int f(int m,int n)
{
	int count = 0;
	if (m <=0 || n <= 0)
	{
		return -1;
	}
	for (int i = 2; i <= n; i+=2)
	{
		for (int j = 1; j < n; j+=2)
		{
			if (7*i + 4*j == m)
			{
				++count;
				cout << "\t|| x = " << i << endl
					 << "\t|| y = " << j << endl
					 << "\t============" << endl; 
			}
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	cout << " there are totally " << f(280,1000) << " roots.";
	return 0;
}
