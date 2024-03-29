#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer that contains the address of the string to be evaluated
 * @accept: pointer that contains the string to evaluate s
 *
 * Return: address of the first occurrence of accept in the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
