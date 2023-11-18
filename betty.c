#include "shell.h"

/**
 * betty_check - Check the code for compliance with Betty style.
 * @filename: Name of the file to be checked.
 * Return: 0 if the file passes the check, 1 otherwise.
 */
int betty_check(const char *filename)
{
    /* Execute the betty style checker on the specified file */
    char command[100];
    snprintf(command, sizeof(command), "betty-style %s && betty-doc %s", filename, filename);

    /* Return the exit status of the betty style checker */
    return system(command);
}


