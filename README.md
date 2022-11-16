Simple Shell

Introduction:
This repository is an ALX School Project. The school project consisted in writing a shell like sh (Bourne Shell) by Stephen Bourne , in C, using a limited number of standard library functions.

The goal in this project was to make us understand how a shell works. To single out some items: what is the environment, the difference between functions and system calls, how to create processes using execve...

Usage
__________________
In order to run this program,

Clone This Repo

git clone https://github.com/winnie54/simple_shell

compile it with

gcc 4.8.4 -Wall -Werror -Wextra -pedantic *.c -o hsh.
OR run ./make
You can then run it by invoking ./hsh in that same directory.

List of allowed functions and system calls
_____________________
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
fork (man 2 fork)
free (man 3 free)
fstat (man 2 fstat)
getcwd (man 3 getcwd)
getline (man 3 getline)
kill (man 2 kill)
lstat (man 2 lstat)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
_exit (man 2 _exit)

Testing
_______
The shell works like this in interactive mode:

$ ./hsh ($) /bin/ls hsh main.c shell.c ($) ($) exit $

But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh hsh main.c shell.c test_ls_2 $ $ cat test_ls_2 /bin/ls /bin/ls $ $ cat test_ls_2 | ./hsh hsh main.c shell.c test_ls_2 hsh main.c shell.c test_ls_2 $

Custom Function (Recreation of Standard Function in C)
_______
_strlen:
int _strlen(char *s)

_putchar:
int _putchar(char c)

_interactive:
int interactive(info_t *info)

_atoi:
int _atoi(char *s)

_puts:
void _puts(char *str)

_str_starts_with:_
boolean str_starts_with(string str, string tok)

_strcmp:
int _strcmp(char *s1, char *s2)

_isalpha:
int _isalpha(int c)

_prerror:
void _prerror(char **argv, int c, char **cmd)

_strcat:
char *_strcat(char *dest, char *src)

_strcpy:
char *_strcpy(char *dest, char *src)

_strchr:
boolean _strchr(char *str, char c)

_strdup:
char *_strdup(char *str)

_memcpy:
char *_memcpy(char *dest, char *src, unsigned int n)

_calloc:
void *_calloc(unsigned int size)

_fill_an_array:_
void *fill_an_array(void *a, int el, unsigned int len)

_free_all:_
void free_all(char **cmd, char *line)

_realloc:
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

_str_array_len:_
size_t str_array_len(char **str_array)

_strtok:
char *_strtok(char *str, char *tok)

_execute:
int execute(char *command, char **args, char **environs)

_myexit:
int _myexit(info_t *info)

_display_help:
int display_help(char **cmd, __attribute__((unused))int er)

_echo:
int echo_bul(char **cmd, int st)

_unset_alias:
int unset_alias(info_t *info, char *str)

_set_alias:
int set_alias(info_t *info, char *str)

_print_alias:
int print_alias(list_t *node)

_myalias:
int _myalias(info_t *info)

_dis_env:_
int dis_env(__attribute__((unused)) char **cmd, __attribute__((unused)) int er)

_getenv:
char *_getenv(char *name)

_myenv:_
int _myenv(info_t *info)

_mysetenv:_
int _mysetenv(info_t *info)

_myunsetenv:_
int _myunsetenv(info_t *info)

_getenv2:_
string _getenv2(string name)

_clear_info:_
void clear_info(info_t *info)

_set_info:_
void set_info(info_t *info, char **av)

_free_info:_
void free_info(info_t *info, int all)

_getline:
char *_getline()

_hastag_handle:_
void hashtag_handle(char *buff)

_history:_
int history(char *input)

_free_env:_
void free_env(char **env)

_free_str_array:_
void free_str_array(char **str_array)

_str_array_len:_
size_t str_array_len(char **str_array)

_str_build:_
char *str_build(size_t n, ...)

_str_cat:_
char *str_cat(char *dest, char *src)

_path:
char **_path(void)

_str_split:_
char **str_split(char *src, char *tok)

_get_stat:_
int get_stat(string path)

_change_dir:_
int change_dir(char **cmd, __attribute__((unused))int er)

_is_delim:_
int is_delim(char c, char *delim)
_______
AUTHORS
MUSA IBRAHIM https://github.com/musaaj

WINNIE ELUU-VINCENT https://github.com/winnie54
