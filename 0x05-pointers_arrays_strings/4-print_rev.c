#include "main.h"
#include <string.h>

/**
 * print_rev -> printing a string in reverse
 * @s: the string tobe printed in rev
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\n'; index++)
		;
	for (index = index - 1; s[index] != '\n'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
