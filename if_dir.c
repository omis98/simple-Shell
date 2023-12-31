#include "shell.h"

/**
*ifdir - check if the given string is dir
*@str: string
*Return: 1 if dir is found in the string or 0 if not found
*/

int ifdir(char *str)
{
	int i = 0;

	if (str[0] == '/' || (str[0] == '.' && str[1] == '/'))
		i += 1;
	if (i > 0)
		return (1);

	return (0);
}
