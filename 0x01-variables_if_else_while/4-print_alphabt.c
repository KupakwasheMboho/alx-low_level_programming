#include <stdio.h>

/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: this program the alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}