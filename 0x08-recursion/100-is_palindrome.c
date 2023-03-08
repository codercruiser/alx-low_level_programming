#include "main.h"

/**
 * lenght - Find the length of a srting.
 * @s: String.
 * Return: The lenght of the string.1
 */
int length(char *s)
{
	if (*s)
	{
		return (1 + length(s + 1));
	}

	return (0);
}

/**
  * function - Have the condition to define if it is a palindrome.
  * @s: String.
  * @len: Lenght of the string.
  * @count: Counter of the function.
  * Return: 1 if it is a palindrome and 0 if it doesn't.
  */
int function(char *s, int act_len, int count)
{
	if (count > act_len)
	{
		return (1);
	}
	else if (*(s + count) == *(s + act_len))
	{
		return (function(s, act_len - 1, count + 1));
	}
	else
	{
		return (0);
	}
}

/**
  * is_palindrome - Answer if the string is a palindrome.
  * @s: String.
  * Return: 1 if it is palindrome and 0 if it doesn't.
  */
int is_palindrome(char *s)
{
	int act_len = lenght(s) - 1;
	int count = 0;

	return (function(s, act_len, count));
}
