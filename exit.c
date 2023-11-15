#include "shell.h"
/**
 * to_exit : function terminate the prog when
 *           user types "exit".
 * @cmd: the string to be read.
 * Return: nothing.
 *
 */
void to_exit(char *cmd)
{
	if (_strcmpare("exit", cmd) == 0)
	{
		free(cmd);
		exit(EXIT_SUCCESS);
	}
}
