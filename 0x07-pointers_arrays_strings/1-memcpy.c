#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Variable declarations */
	unsigned int i;

	/* Copy data from src to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	/* Return a pointer to the destination buffer */
	return (dest);
}
