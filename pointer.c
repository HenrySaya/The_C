#include <stdio.h>
/**
 * main - address of a data type
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int *ptr;

	n = 9463;
	ptr = &n;
	printf(" The memory address of %d is: %p\n", n, ptr);
	return (0);
}
