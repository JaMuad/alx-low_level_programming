#include "main.h"

/**
 * _strcat - combines two strings
 * @dest - first string
 * @src - Second string
 *
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len))
	{
		len++;
	}
	while(*(src + len2))
	{
		dest[len] = *(src + len2);
		len++;
		len2++;
	}
	return (dest);
}