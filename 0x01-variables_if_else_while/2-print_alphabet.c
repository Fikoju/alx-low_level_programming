#include <stdio.h>
/**
 * main - Aprogram that print the alphabet in small letters
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		purchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
