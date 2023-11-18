#include "shell.h"
/**
 * main - main function
 * @arc: len argument
 * @arv: arv argument by user
 * @envp: envp argument env
 * Return: 0
 */
int main(int arc, char **arv, char **envp)
{
	/* Check the shell.h file */
    if (betty_check("shell.h") == 0)
        printf("shell.h passed Betty style check\n");
    else
        printf("shell.h did not pass Betty style check\n");

    /* Check the main.c file */
    if (betty_check("main.c") == 0)
        printf("main.c passed Betty style check\n");
    else
        printf("main.c did not pass Betty style check\n");

    /* Add more files to check as needed */

    return 0;

	bool interactive = (arc == 1 && isatty(STDIN_FILENO));

	prompt(arv, envp, interactive);
	return (0);
}
