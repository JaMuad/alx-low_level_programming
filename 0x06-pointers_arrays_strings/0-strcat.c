#include "main.h"

/**
 *  *_strcat - combines two strings
 *  @dest: first string
 *  @src: second string
 *
 *  Return: char
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int i = 0;

	while (*(dest + c))
		c++;

	while (*(src + i))
	{
		dest[c] = *(src + i);
		c++;
		i++;
	}
	return (dest);
}