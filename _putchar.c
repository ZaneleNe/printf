#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a single character
 * @ch: character to be printed
 *
 * Return: 1 on success.
 */
int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
