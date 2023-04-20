#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	print_t prints[] = {
		 {"c", print_char},
		 {"i", print_int},
		 {"f", print_float},
		 {"s", print_string},
		 {NULL, NULL}};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		unsigned int j = 0;

		while (prints[j].type != NULL)
		{
			if (format[i] == *(prints[j].type))
			{
				printf("%s", separator);
				prints[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
