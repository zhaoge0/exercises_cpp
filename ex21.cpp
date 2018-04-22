// 21. 编写一个自定义函数：int f( longa[ ], int n, long x) ，
// f( )的功能是：对给定的含有n个元素的一维数组a及某个指定数x，
// 查找数组a中是否存在元素值等于x的元素，
// 若存在，则函数值返回找到的下标最大的那个元素的下标；
// 若不存在，则函数值返回-1。 
#include <iostream> 
using namespace std; 
int f(long a[],int n, long x); 
int main() 
{ long x=7; 
long a[5]={3,5,2,7,9}; 
cout<<f(a,5,x)<<endl;  
} 

int f(long a[],int n, long x)
{
	int index = -1;
	for (int i = 0; i < n; ++i)	if (x == a[i])	index = i;
	return index;
}