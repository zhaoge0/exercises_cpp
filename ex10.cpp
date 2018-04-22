// 10. 编写一个自定义函数：
// int f( int N) ，f( )的功能是：
// 对给定的正整数N，打印一个N行N列的由"A"、"B"、"C"以及空格" "符号组成的方阵图案。
// 比如，当N为5时，打印的图案如本题图所示。且函数值返回1。 
#include <iostream> 
using namespace std; 
int f(int N); 
int main() 
{ f(5); } 

int f(int N)
{
	for (int m = 0; m < N; ++m)
	{
		if (m > 0)
		{
			cout << "A ";
		}
		for (int i = 0; i < m-1; ++i)
		{
			cout << "C ";
		}
		cout << "A ";
		for (int j = 0; j < N-m-1; ++j)
		{
			cout << "B ";
		}
		cout << endl;
	}
	return 1;
}
