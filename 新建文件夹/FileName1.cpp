#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a,b = 0;
	for (a = 1;; a++)
	{
		if (is_prime(a))
		{
			b++;
			printf("%d ", a);
			if (b % 10 == 0)
			{
				printf("\n");
			}
		}
		
		if (b == 200)
		{
			break;
		}
	}

	return 0;
}