#include <iostream>
using namespace std;
#include"mytemperature.h"
#define _CRT_SECURE_NO_WARNINGS
double celsius_to_fah(double cel)
{
	return cel * 9 / 5 + 32;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32) * 5 / 9;
}
int main()
{
	double m,n = 0;
	printf("Celsius     Fahrenheit   |   Fahrenheit    |     Celsius\n");
	while (scanf_s("%lf %lf", &m,&n) != EOF)
	{
		printf("%.1lf    %.1lf   |    %.1lf       %.1lf\n", m,celsius_to_fah(m),n,fahrenheit_to_cels(n));

	}
	return 0;

}