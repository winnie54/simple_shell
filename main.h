#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
extern char **path;
extern char **environ;

typedef struct builtins
{
	char *command;
	int (*action)(char **args);
	struct builtins *next;
}builtin;
typedef char* string;
typedef unsigned int boolean;
char *_strtok(char *, char *);
char **str_split(char *src, char *tok);
char *_strdup(char *);
boolean _strchr(char *, char);
void free_str_array(char **);
size_t str_array_len(char **);
string _getenv2(string);
boolean str_starts_with(string, string);
int get_stat(string);
char **_path(void);
char *_strcat(char *, char *);
char *str_cat(char *, char *);
char *str_build(size_t n, ...);
int execute(char *, char **, char **);
#endif
