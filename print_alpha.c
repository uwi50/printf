#include "main.h"

/**
 * print_string - prints characters
 * @l: va_list arg from _printf
 * @f: pointer to the stuct flags
 *
 * Return: the number of printed character
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a char
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 *
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
