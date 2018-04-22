// 09. 编写一个自定义函数：int f( char x, int N) ，
// f( )的功能是：
// 对给定的字符c和整数N，用
// c代表的符号打印一个N行的图案，
// 每行开头没有任何空格。
// 比如，当c为"*"且N为5时，打印的图案如本题图所示。且函数值返回1。 
#include <iostream> 
using namespace std; 
int f(char x, int N); 
int main( ) 
{ 
f('*',5); 
return 0; 
} 

int f(char x,int N)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < i+1; ++j)
		{
			cout << x;
		}
		cout << endl;
	}
}
