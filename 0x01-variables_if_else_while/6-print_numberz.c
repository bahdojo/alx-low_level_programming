#include <stdio.h>
#include <unistd.h>
/**
 * main - This is a function
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)

		putchar(a + '0');

	putchar('\n');
	return (0);
}

