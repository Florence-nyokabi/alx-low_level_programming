#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:vinput pointer of the string to copy.
 * Return: Pointer to new string or NULL if it is str is NULL
 */
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if(str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) *
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
