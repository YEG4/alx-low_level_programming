#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints string on the console.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i,j;

	for (i = 48; i <= 57; i++)
       	{
	       	for (j = 49; j <= 57; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' && j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
            
		}
        
	}
	putchar('\n');
	return (0);
}
