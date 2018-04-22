#include <iostream>
using namespace std;
//02. 从键盘上输入一个正整数,判别它是否为一回文数。如：123321
int getcount(int num)
{
	int i;
	for (i = 1; (num/=10)>0 ; ++i);
	return i;
}


int get1num(int num,int n)
{
	for (int i = 0; i < n-1; ++i) num /= 10;
	num %= 10; 
	return num;
}

bool is_palindrome(int num)
{
	int count = getcount(num);
	int times = count/2;
	for (int i = 1; i <= times; ++i)
	{
		if (get1num(num,i) != get1num(num,count-i+1))
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;

	if (is_palindrome(num))
	{
		cout << "is a palindrome number." << endl;
	}else
	{
		cout << "is not a palindrome number." << endl;
	}
	return 0;
}
