#include <stdio.h>

int main(void)
{
	unsigned int a, b;

	scanf_s("%u %u", &a, &b);
	printf("%u", a % b);

	return 0;
}