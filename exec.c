#include "Shell.h"

/**
 * exec_cmd - execve the comands from input.
 * @array: command to be executed
 * Return: 0 Always
 */
int exec_cmd(char **array)
{
	pid_t pid;
	int status;

	if (array == NULL || array[0] == NULL)
	{
		return (-1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("error");
		return (-1);
	}
	if (pid == 0)
	{
		execve(array[0], array, NULL);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
