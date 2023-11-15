#include "shell.h"
/**
 * run_cmd : a function run command
 * @rgv: rgv argument
 * @arv: arv argument
 * @envp: envp argument
 */
void run_cmd(char **rgv, char **arv, char **envp)
{
	pid_t mychild;
	int stat;
	

	mychild = fork();

	if (mychild == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (mychild == 0)
	{

		if (execve(rgv[0], rgv, envp) == (-1))
		{
			write(STDOUT_FILENO, arv[0], _strlength(arv[0]));
			write(STDOUT_FILENO, ": No such file or directory",
			_strlength(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
			
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&stat);
	}
}
