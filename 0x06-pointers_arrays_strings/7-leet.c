#include "main.h"
/**
 * leet - Encodes a string into 1337eleet
 * @str: input value
 *
 * Return: n value
 */
char *leet(char *str)
{
	char *leetspeak = "AEOTLaeotl";
	char *leetreplace = "430710317301";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetspeak[j] != '\0'; j++)
		{
			if (str[i] == leetspeak[j])
			{
				str[i] = leetreplace[j];
			}
		}
	}
	return (str);
}
