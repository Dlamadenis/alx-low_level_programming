#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int digits;

	for (digits = '0'; digits = digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	return (0);
}
