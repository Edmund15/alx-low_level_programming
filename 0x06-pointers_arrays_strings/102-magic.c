#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0
  */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a(p + 5));
	return (0);
}
