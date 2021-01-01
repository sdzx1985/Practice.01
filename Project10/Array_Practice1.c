#include <stdio.h>

int main(void) {
	/*
	char str1[5] = "Good";
	char str2[] = "morning";

	printf("%s %s \n", str1, str2);
	*/
	/*
	int i;
	char ch;
	char str[6] = "hello";

	printf("Before changing \n");
	printf("%s \n", str);
	for (i = 0; i < 6; i++)
		printf("%c |", str[i]);


	for (i = 0; i < 3; i++)
	{
		ch = str[4 - i];
		str[4 - i] = str[i];
		str[i] = ch;
	}

	printf("\n\n After changing \n");
	printf("%s \n", str);
	*/

	char str1[30];

	printf("Insert the words: ");
	scanf_s("%s", str1);

	printf("Inserted words: %s\n", str1);

	return 0;
}
