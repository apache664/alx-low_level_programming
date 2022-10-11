#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, while the error is set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
