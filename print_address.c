#include "main.h"

/**
 * print_address - prints address
 * @f: pointer to the struct flag that
 * verify if a flag has been passed to _printf
 * @l: va_list arg from _printf
 *
 * Return: the number of characters printed out
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int u = va_arg(l, unsigned long int);
	
	register int c = 0;

	(void)f;

	if (!u)
		return (_puts("(null)"));
	str = convert(u, 16, 1);
	c += _puts("0x");
	c += _puts(str);
	return (c);
}
