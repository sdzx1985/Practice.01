#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i < 5)
	{
		printf("%d \n", i);
			i++;
			/* 0 부터 4까지 5개의 숫자 출력 */
	}
	printf("\n");

	int l = 1;
	while (l < 10)
	/* while (1) 인 경우 무한루프 */
	{
		printf("Loop test \n");
		l++;
		/* l++; 가 없을 시에는 무한루프, 루프를 깨는 장치가 있어야 함 */
	}
	printf("\n");

	int a = 0, b = 0;
	while (a < 3) {
		printf("a = %d \n", a);
		while (b < 2) {
			printf("b = %d \n", b);
			b++;
		}
		a++;
		b = 0;
		/* a 선행 b 완료 후 a 재실행 */
	}
	printf("\n");



	return 0;
}