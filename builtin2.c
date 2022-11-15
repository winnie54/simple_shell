#include "main.h"
int (*fun[])(string, string *) =
{
	&_quit,
	&help,
	NULL
};
string fun_id[] =
{
	"exit",
	"help",
	NULL
};

int _quit(__attribute__((unused)) string command, __attribute__((unused)) string *args)
{
	free_str_array(args);
	exit(0);
	return (0);
}

int help(__attribute__((unused)) string commad, __attribute__((unused)) string *args)
{
	puts("\t\t\t\thsh: Copyright 2022 Musa And Winnie");
	puts("\t\t\t\tI work like Unix sh");
	return (0);
}

int exec_builtin(__attribute__((unused)) string cmd, __attribute__((unused)) string *args)
{
	int cmd_id = get_cmd_id(cmd);

	if (cmd_id != -1)
		return ((*fun[cmd_id])(cmd, args));
	return (-1);
}

size_t get_cmd_id(string cmd)
{
	int i = 0;
	
	while (fun_id[i])
	{
		if (!_strcmp(cmd, fun_id[i]))
			return (i);
		i++;
	}
	return (-1);
}
