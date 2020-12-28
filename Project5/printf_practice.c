#include <stdio.h>

void main(void)
{
	int Num = 123;

	printf("-->%d<--\n", Num);

	int value = 12;
	char ch = 'S';

	printf("the integer is %d, and the character is %c. \n", value, ch);

	printf("-->%d<--\n", Num);
	printf("-->%5d<--\n", Num);
	printf("-->%05d<--\n", Num);
	printf("-->%-5d<--\n", Num);

	double pie = 3.14;

	printf("-->%f<--\n", pie);
	printf("-->%10f<--\n", pie);
	printf("-->%.2f<--\n", pie);
	printf("-->%10.2f<--\n", pie);
	printf("-->%101.2f<--\n", pie);
	printf("-->%-10.2f<--\n", pie);


	int a, b;
	int sum;

	printf("Insert the first number: ");
	scanf_s("%d", &a);
	printf("Insert the second number: ");
	scanf_s("%d", &b);

	sum = a + b;
	printf("sum of the first and second number is %d\n", sum);

	int c, d;
	printf("Insert two numbers: ");
		scanf_s("%d%d", &c, &d);

		sum = c + d;
		printf("sum of the two numbers is %d\n", sum);
	
}