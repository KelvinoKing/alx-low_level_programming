#include "main.h"
/**
 * getLength - Returns string length
 *
 * @s: second param
 *
 * Return: int
 */
int getLength(char *s)
{
	if (s[0] == 0)
		return (0);

	return (1 + getLength(s + 1));
}

/**
 * check_palindrome - Checks if a string is palindrome
 *
 * @s: first param
 * @i: second param
 * @j: third param
 *
 * Return: int
 */
int check_palindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);

	if (s[i] != s[j])
		return (0);

	if (i < j + 1)
		return (check_palindrome(s, i + 1, j - 1));

	return (1);
}

/**
 * is_palindrome - Checks if string is palindrome
 *
 * @s: function param
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int len;

	len = getLength(s);

	if (s == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
