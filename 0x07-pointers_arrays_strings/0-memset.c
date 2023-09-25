#include "main.h"

/**
* memset - Fills the first n bytes to memory area
*           pointed to by @s with the constant byte @c.
* @s: its pointer to the memory area to be filled.
* @c: character to fill the memory area with.
* @n: number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
