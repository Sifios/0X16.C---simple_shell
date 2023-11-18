#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
#define MAX_C 10
/**
 * struct denum : structure contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;
int betty_check(const char *filename);
void prompt(char **arv, char **envp, bool flg);
int _strcmpare(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *handling_path(char **rgv, char *cmd);
char *_strcopy(char *dest, char *src);
int _strlength(char *s);
void to_exit(char *cmd);
void run_cmd(char **rgv, char **arv, char **envp);
char *trim(char *cmd);
char *_strncopy(char *dest, char *src, int n);
char *get_path(char *cmd);
char *_getenv(char *name);
char **tokenize_env(char *path);
extern char **environ;
/*void geterror(int cnt, char **arv, char *cmd);*/
void geterror(denum *n, char **arv, char *cmd);
/*void search_path(char **rgv, char *cmd, char **envp);*/
#endif
