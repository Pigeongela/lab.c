#include <stdio.h>
float sqrt(float n);
int main()
{
	float n;
	scanf_s("%f", &n);
	if (n >= 0)
		printf("square root is: %f\n", sqrt(n));
	else
		return 1;
	return 0;
}

float sqrt(float n)
{
	float x = n;
	float y = 1;
	float a = 0.000001f;
	while ((x - y) > a)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}