#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is given back, and error is set on point without any mistakes.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
