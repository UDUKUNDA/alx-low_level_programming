#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - to generate a password
 *
 * Return: 0 upon success
 */
int main(void)
{
	int passlen = 11, i;
	char a[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_-+=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\\|";
	srand(time(NULL));
	for (i = 0; i < passlen; i++)
	{
		printf("%c", a[rand() % (sizeof a - 1)]);
	}
	return (0);
}
