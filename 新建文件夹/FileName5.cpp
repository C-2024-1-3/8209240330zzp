#include<iostream>
using namespace std;
void hanshu(bool ar[100],int i)
{
	int j = 0;
	for (j = 0; j < 100; j++)
	{
		if ((j+1) % i == 0)
		{
			ar[j] = !ar[j];
		}
	}
}
int main()
{
	bool arr[100] = { 0 };
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		hanshu(arr,i);
	}
	for (i = 1; i <= 100; i++)
	{
		if (arr[i - 1] == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}