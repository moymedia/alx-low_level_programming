#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first str
 * @s2: second str
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
