#include "shell.h"
/**
 * handling_path : handle the path function
 * @rgv: rgv argument
 * @cmd: command set by the user
 * Return: command for exec
 */
char *handling_path(char **rgv, char *cmd)
{
	char *path;

	path = malloc(_strlength("/bin/") + _strlength(cmd) + 1);
	if (!path)
	{
		return (NULL);
	}
	_strcopy(path, "/bin/");

	if (cmd[0] != '/' && cmd[0] != '.')
	{
		rgv[0] = _strcat(path, cmd);
		return (rgv[0]);
	}
	free(path);
	return (cmd);
}
