#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * is_palindrome - return 1 if the given string is palindrome otherwise return 0
 *
 *Return: 1 if the given strging is palindrome otherwise return 0
 *@s: the given string
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len < 2)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
/**
 * check_palindrome - recursively check palindrome or not
 *
 *Return: 1 if the string is palindrome otherwise 0
 *@s: the given string
 *@start: starting index of the string
 *@end: end of the string index
 */

int check_palindrome(char *s, int start, int end)
{
	if (start == end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else if (start > end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}
