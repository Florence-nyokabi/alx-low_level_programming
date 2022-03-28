#include "main.h"
/**
 * _memcpy - copies bytes
 * @dest: memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = (src + i);
		i++;
	}

	return (dest);
}
