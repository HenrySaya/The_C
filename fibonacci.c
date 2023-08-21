#include <stdio.h>
/**
 * main - print fibonacci series
 *
 * Return: returns 0
 */

int main(void)
{
	int x, y, i;
	int z, temp;

	x = 0;
	y = 1;

	for (i = 0; i < 16; i++)
	{
		z = x + y;
		printf("%d ", z);
		temp = z;
		x = y;
		y = temp;
	}
	printf("\n");

	return (0);
}
