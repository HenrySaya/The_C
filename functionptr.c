#include "main.h"
#include <stdio.h>
/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}
