/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if n > 0
{
	printf("is positive\n");
}
	else if n = 0
{
	printf("is zero\n");
}
	else if n < 0
{
	printf("is negative\n");
}
	return (0);
}
