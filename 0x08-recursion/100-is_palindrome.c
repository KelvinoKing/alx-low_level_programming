#include "main.h"
/**
 * _strlen_recursion - Returns length of a string
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks if string is palindrome
 * @s: first param
 * @i: second param
 * @strlen: third param
 *
 * Return: int
 */
int check_palindrome(char *s, int i, int strlen)
{
	if (s[i] != s[strlen])
	{
		return (0);
	}
	if (i < strlen + 1)
	{
		return (check_palindrome(s, i + 1, strlen - 1));
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is palindrome
 * @s: string input
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int j;
	int strlen;

	if (s[0] == '\0')
	{
		return (1);
	}

	strlen = _strlen_recursion(s);
	j = check_palindrome(s, 0, strlen - 1);
	return (j);
}
