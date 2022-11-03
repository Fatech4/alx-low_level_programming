#include "main.h"
int _strlen(char *str);
int check_palindrome(int fwd, int bwd, char *str1);
/**
 * is_palindrome - A function that returns 1 if a string is a palindrome and 0
 * if not
 * @s: String parameter
 * Return: Return 1 or 0
 */

int is_palindrome(char *s)
{
	int j;

	j = _strlen(s) - 1;
	return (check_palindrome(0, j, s));
}
/**
 * _strlen - A function that return the length of a string
 * @str: String parameter
 * Return: The length of string
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - A function that check for palindrome
 * @fwd: Forward index
 * @bwd: Backward index
 * @str1: String parameter
 * Return: 1 or 0
 */

int check_palindrome(int fwd, int bwd, char *str1)
{

	if (*(str1 + fwd) != *(str1 + bwd))
	{
		return (0);
	}
	if (fwd >= bwd)
	{
		return (1);
	}
	return (check_palindrome(fwd + 1, bwd - 1, str1));
}
