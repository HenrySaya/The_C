#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */
int main(void)
{
	int t[5];
	int i;

	t[0] = 98;
	t[1] = 99;
	t[2] = 988;
	t[3] = 989;
	t[4] = 990;

	for (i = 0; i < 5; i++)
	{
		printf("Our array is: %d\n", t[i]);
		printf("address of corresponding array above is: %p\n", &t[i]);
	}
	return (0);
}	
