#include <stdio.h>

int main(void)
{
	/* 
	//complete
	int i;

	for (i = 0; i < 10; i++) {
	printf("i = %d \n", i);
	}
	*/

	/* forsum 2 
	//complete
	int total = 0;
	int j, n;

	printf("1부터 n까지의 덧셈 값은? ");
	scanf("%d", &n);
	

	for (j = 0; j < n + 1; j++)
		total += j;

	printf("1부터 %d까지 덧셈 결과는 : %d \n", n, total);

	*/

	/*
	//error
	int a;
	clrscr();
	// clrscr 왜 에러인지 모르겠음
	for (a = 1; a <= 80; a++) {
		gotoxy(a, 10);
		putch('#');
		gotoxy(a - 1, 10);
		putch(' ');
		delay(100);
	}
	*/

	/*
	// complete
	int q, w;
	for (q = 1; q <= 3; q++) {
		for (w = 1; w <= 3; w++) {
			printf("%d*%d=%d \n", q, w, q * w);
		}
		printf("\n");
	*/
	/*
	//complete
	int e, r;
	for (e = 1; e <= 15; e++) {
		for (r = 0; r < e; r++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	/*
	// Assignment4 - triangle4
	int z, x;
	
	for (z = 1; z <= 15; z++) {
		for (x = 0; x < 15 - z; x++)
			printf(" "); {
			for (x = 1; x < z*2; x++) {
				printf("*");
			}
		}
		printf("\n");
	}
	*/
	/*
	// Assignment5 - triangle5
	// give up
	int f, g;

	for (f = 1; f <= 10; f++) {
		for (g = 0; g < 5 - f; g++)
			printf(" "); {
			for (g = 1; g < f ; g++) {
				printf("*");
			}
		}
		printf("\n");
	}
	*/
	int sum, y, u, w;

	printf("Insert the value for calculating: ");
	scanf_s("%d", &y);

	w = sum = 1;
	for (u = 1; u <= y; u++) {
		w = w * u;
		sum = sum + w;
	}
		printf("sum = %d\n", sum);

		return 0;
}