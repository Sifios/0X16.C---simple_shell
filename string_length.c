#include "shell.h"
/**
 * _strlength : length of a string
 * @s: string
 * Return: length
 */
int _strlength(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
