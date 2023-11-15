#include "shell.h"
/**
 * _strcopy : copy a string
 * @dest: dest string arg
 * @src: source arg
 * Return: string value
 */
char *_strcopy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
