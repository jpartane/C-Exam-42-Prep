/* Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Allowed functions: write */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int x;
	int tmp;

	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] == ' ' || argv[1][x] == '\t')
				tmp = 1;
			if (!(argv[1][x] == ' ' || argv[1][x] == '\t'))
			{
				if (tmp)
					write(1, " ", 1);
				tmp = 0;
				write(1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
