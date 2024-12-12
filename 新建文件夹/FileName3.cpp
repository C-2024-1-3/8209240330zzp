#include<iostream>
using namespace std;
int  taozi(int m,int n)
{
	if (m == 1)
	{
		return n;
	}
	return taozi(m-1,(n+1)*2);
	
}
int main()
{
	int a = taozi(10, 1);
	printf("%d", a);
	return 0;
}
