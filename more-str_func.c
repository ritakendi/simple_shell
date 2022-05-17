#include "Shell.h"

/**
 * sig_handler - checks if Ctrl C is pressed by the input
 * @signum: integer
 * Return: void
 */
void sig_handler(int signum)
{
	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
}

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

