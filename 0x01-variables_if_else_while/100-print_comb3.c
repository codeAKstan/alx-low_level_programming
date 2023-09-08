#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum = 0;
	int snum = 1;

	while (fnum <= 8)
	{
		while (snum <= 9)
		{
			putchar(fnum + '0');
			putchar(snum + '0');

			if (fnum != 8 || snum != 9)
			{
				putchar(',');
				putchar(' ');
			}

			snum++;
		}
		fnum++;
		snum = fnum + 1;
	}
	putchar('\n');
	return (0);
}
