// 11. 编写函数f()，计算具有n个元素的一维数组a中每组相邻两个数的差，找出其中的最大差作为函数值返回。 
#include <iostream> 
#include <cmath>
using namespace std; 
#define M 5 
int f(int a[], int n); 
int main() 
{ int i, a[M]; 
 for(i=0;i<M;i++) 
    cin>>a[i]; 
 cout<<"The result is "<<f(a,M)<<endl; 
} 

int f(int a[], int n)
{
	int sub = 0, t = 0;
    for (int j = 0; j < n-1; ++j)
    {
    	sub = abs(a[j]-a[j+1]);
    	if ( t < sub)
    	{
    		t = sub;
    	}
    }
    return t;
}