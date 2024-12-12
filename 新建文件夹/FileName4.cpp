#include<iostream>
using namespace std;
void hanshu( double arr[10])
{
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		int j = 0;
		for (j = 0; j < 9 - i; j++)
		{
			double a = 0;
			if (arr[j] > arr[j + 1])
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;

			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%lf ", arr[i]);
	}
}
int main()
{
	double arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	hanshu(arr);

	
	return 0;
}