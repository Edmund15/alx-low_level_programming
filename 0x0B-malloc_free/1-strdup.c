#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated duplicate string,
 * or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
