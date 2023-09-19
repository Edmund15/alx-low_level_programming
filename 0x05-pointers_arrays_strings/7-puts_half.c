#include  "main.h"
/**
  *puts_half - the function name
  *@str: the function parameter
  */
void puts_half(char *str)
{
	int i;
	int a;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
		a = (count - 1) / 2;
	}
	for (i = a + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
