#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Description: using the main function
 *
 * this program prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for(i = 0; i < 10 ; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return(0);
}
