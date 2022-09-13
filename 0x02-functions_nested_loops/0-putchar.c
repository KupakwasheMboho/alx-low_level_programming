#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints _putcar using putchar prototype
 *
 * Retur: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(str[ch]);
		_putchar("\n");
	}
	return (0);
}
