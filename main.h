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

#define BUFSIZE 2048
extern char **path;
extern char **environ;
typedef char *string;
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
char **set_path(void);
/*str functions*/
int _strlen(char *s);
int _putchar(char c);
int _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
char *_strcat(char *, char *);
char *str_cat(char *, char *);
char *str_build(size_t n, ...);
string str_rev(string);
string itoa(int);
/*system interface*/
int execute(char *, char **, char **);
string _get_command_path(string);
/*builtins*/
int _quit(string, string *);
int help(string, string *);
int exec_builtin(string, string *);
size_t get_cmd_id(string);
#endif
