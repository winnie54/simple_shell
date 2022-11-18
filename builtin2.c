#include "main.h"

/**
 * _quit - exit the programm
 * @cmd: str
 * @args: string array
 * Return: no return on success else 0
 */
int _quit(__attribute__((unused)) string cmd, string *args)
{
	free_str_array(args);
	exit(0);
	return (0);
}

/**
 * _env - prints enviroment variables
 * @cmd: str
 * @args: string array
 * Return:  0 alwyas
 */
int print_env(string cmd, __attribute__((unused)) string *args)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		_puts( environ[i]);
		_puts("\n");
		i++;
	}
	(void)cmd;
	return (0);
}

/**
 * help - exit the programm
 * @cmd: str
 * @args: string array
 * Return:  0 alwyas
 */
int help(string cmd, __attribute__((unused)) string *args)
{
	(void)cmd;
	_puts("\t\t\t\thsh: Copyright 2022 Musa And Winnie");
	_puts("\t\t\t\tI work like Unix sh");
	return (0);
}

/**
 * exec_builtin - execute builtin functions
 * @cmd: str
 * @args: string array
 * Return: 0 on success else -1
 */
int exec_builtin(string cmd, string *args)
{
	int cmd_id = get_cmd_id(cmd);

	int (*fun[])(string, string *) = {
		&_quit,
		&help,
		&print_env,
		NULL
	};
	if (cmd_id != -1)
		return ((*fun[cmd_id])(cmd, args));
	return (-1);
}

/**
 * get_cmd_id - check for a builtin command
 * @cmd: str
 * Return: command id on success else -1
 */
size_t get_cmd_id(string cmd)
{
	int i = 0;
	string fun_id[] = {
		"exit",
		"help",
		"env",
		NULL
	};

	while (fun_id[i])
	{
		if (!_strcmp(cmd, fun_id[i]))
			return (i);
		i++;
	}
	return (-1);
}
