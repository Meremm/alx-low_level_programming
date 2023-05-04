#include "main.h"
/**
* _strcat - concatenates two strings
* @s1: input value
* @s2: input value
*
* Return: void
*/
char *_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';
	return (s2);
}
