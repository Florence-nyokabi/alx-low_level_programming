#include "main.h"
/**
 * _strchr - locates first occurence of a character in a string
 *@s: source string
 *@c: character
 *
 *Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
