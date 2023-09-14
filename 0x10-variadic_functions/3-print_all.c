#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - a function that prints anything
  *@format: list of all arguments types
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	va_list op;
	char *r, *sep;
	unsigned int a;

	va_start(op, format);

	sep = "";

	a = 0;
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(op, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(op, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(op, double));
				break;
			case 's':
				r = va_arg(op, char *);
				if (r == NULL)
					r = "(nil)";
				printf("%s%s", sep, r);
				break;
			default:
				a++;
				continue;
		}
		sep = ", ";
		a++;
	}

	printf("\n");
	va_end(op);
}
