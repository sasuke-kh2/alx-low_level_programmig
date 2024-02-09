#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: print a to z using _putchar
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

