#include "main.h"
#include <stdio.h>
/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);
	return (0);
}
