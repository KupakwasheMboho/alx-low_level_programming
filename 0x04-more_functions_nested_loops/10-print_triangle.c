#include <stdio.h>
#include"main.h"

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hght = 1; hght <= size; ++hght)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
		}
	}
}
