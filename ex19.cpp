// 19. 用牛顿迭代法求方程3x3 - 4x2 - 5x + 13 = 0在x=1附近的根，要求精度为 E。

#include <iostream>
#include <cmath>
#define E 1e-6
#define f(x) (3*(x)*(x)*(x) - 4*(x)*(x) - 5*(x) + 13)
#define fd(x) (9*(x)*(x) - 8*(x)-5)
using namespace std;

int main(int argc, char const *argv[])
{
	double x = 1;
	while(fabs(f(x)) > E) x -= f(x)/fd(x);
	cout << x << endl ;
	return 0;
}