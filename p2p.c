#include <stdio.h>
/**
 * main - pointer to pointer addressing
 *
 * @c: test digit
 * @*ptr: first pointer
 * @**p: second pointer
 * Return: always 0
 */
int main(void)
{
	int c;
	int *ptr;
	int **p;

	c = 3004;
	ptr = &c;
	p = &ptr;

	printf("The value of c is: %d\n", c);
	printf("The value at *ptr is: %d\n", *ptr);
	printf("The value at **p is: %d\n", **p);
	return (0);
}
