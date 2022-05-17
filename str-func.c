#include "Shell.h"

/**
 * _strcpy - makes a copy of a string
 * @dest: array copied
 * @src: source of array
 * Return: the string copied
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned int i;

	if (src == NULL || dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -ve integer, 0 or +ve integer if s1 is lee than,
 * equal to or greater than s2
 */
int _strcmp(const char *s1, const char *s2)
{
	int diff = 0;

	while (diff == 0)
	{
		diff = *s1 - *s2;

		/*break if one of the strings is empty*/
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	return (diff);
}
/**
 * _strdup - returns a pointer to a newl allocated space
 * in memory, which contains a copy of the given string
 * @str: string to copy
 *
 * Return: new string identical to str. otherwise NULL
 */
char *_strdup(char *str)
{
	unsigned int length;
	char *result;

	if (str == NULL)
		return (NULL);

	/*allocate space for new string*/
	length = _strlen(str);
	result =  malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	/*copy contents of str into new string*/
	return (_strcpy(result, str));
}
/**
 * _strlen - return the length of a string
 * @s: character to print
 *
 * Return: number of characters of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcat - concatenates two strings
 * @dest: character to print
 * @src: word to print
 * Return: string concatenate
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
