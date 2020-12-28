#include <stdio.h>

int main(void)
{
	/*
	int i;

	for (i = 0; i < 10; i++) {
	printf("i = %d \n", i);
	}
	*/

	/* forsum 2 */
	
	int total = 0;
	int j, n;

	printf("1부터 n까지의 덧셈 값은? ");
	scanf("%d", &n);
	

	for (j = 0; j < n + 1; j++)
		total += j;

	printf("1부터 %d까지 덧셈 결과는 : %d \n", n, total);


	/*
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

}