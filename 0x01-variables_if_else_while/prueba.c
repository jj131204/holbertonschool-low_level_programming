#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int x;
	int y = 49;
	int z = 50;
	for (x = 48; x <= 55; ++x)
	{
		for (y = x + 1; y <= 56; ++y)
		{
			for (z = 50; z <= 57; ++z)
			if (x != y && y != z && x != z && x < y && y < z)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != 55 || y != 56 || z != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
