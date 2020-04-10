/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;

	i = nb;

	if (nb < 0)
	{
		i = i * -1;
		ft_putchar('-');
	}

	if (nb >= 1 && nb <= 9)
	{
		ft_putchar(i + 48);
	}

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		main(int argc, char **argv)
{
		if (argc > 1)
		{
			ft_putnbr(argc - 1);
			//ft_putchar('\n');
		}
		ft_putchar('\n');
		return (0);
}
