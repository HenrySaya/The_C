#include <stdio.h>
/**
 * main - dereferencing pointers
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 9463;
	p = &n;
	printf(" The memory address of n which is: %d is: %p\n", n, p);
	*p = 1963;
	printf(" The memory address of new value n is: %d is: %p\n", n, p);
	return (0);
}
