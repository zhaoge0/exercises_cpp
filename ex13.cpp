// 13. 编写程序，求e的值，e≈1+1/1!+1/2!+1/3!+1/4!+...，最后一项的值小于1e-6。
#include <iostream>
#define E 1e-6
using namespace std;

int main(int argc, char const *argv[])
{
	double e = 1,an = 1;
	for (int i = 1; an > E; ++i)
	{
		an /=  i;
		e += an;
	}
	cout << "e = " << e << endl;
	return 0;
}