#include "Shell.h"

/**
 * _getenv - gets the value of an environment variable
 * @var_name: the variable name
 * Return: value of the environment variable
 */
char *_getenv(char *var_name)
{
	int i, j;
	char *variable_value;

	if (var_name == NULL)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (var_name[j] == environ[i][j])
		{
			while (var_name[j])
			{
				if (var_name[j] != environ[i][j])
				{
					break;
				}
				j++;
			}
			if (var_name[j] == '\0')
			{
				variable_value = (environ[i] + j + 1);
				return (variable_value);
			}
		}
	}
	return (NULL);
}
