#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;
	for (k = 0; dest[k] != '\0'; k++);
	while (src[i] != '\0')
	{
		dest[k + j] = src[j];
		j++;
	}
	return (dest);
}
