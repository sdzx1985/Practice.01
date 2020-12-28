#include <stdio.h>

void main(void)
{

	int a, b;
	int sum;

	printf("Insert the first number: ");
	scanf_s("%d", &a);
	printf("Insert the second number: ");
	scanf_s("%d", &b);

	sum = a + b;
		printf("sum of the first and second number is %d\n", sum);
}