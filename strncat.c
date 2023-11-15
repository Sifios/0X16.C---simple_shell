#include "shell.h"
/**
 * _strncontcat : Concantenates two strings where n number
 *                of bytes are copied from source.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncontcat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlength(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
