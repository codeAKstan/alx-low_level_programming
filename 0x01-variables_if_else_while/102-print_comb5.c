#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum = 0;

	while (fnum <= 99)
	{
		int snum = fnum;

		while (snum <= 99)
		{
			putchar((fnum / 10) + '0');
			putchar((fnum % 10) + '0');
			putchar(' ');

			putchar((snum / 10) + '0');
			putchar((snum % 10) + '0');

			if (fnum != 99 || snum != 99)
			{
				putchar(',');
				putchar(' ');
			}
			snum++;
		}
		fnum++;
	}
	putchar('\n');
	return (0);
}
