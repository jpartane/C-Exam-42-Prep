/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brakets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:08:09 by jpartane          #+#    #+#             */
/*   Updated: 2020/10/15 18:12:55 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# define MATCH(a, b) ((a == ')' && b == '(') || (a == ']' && b == '[') || (a == '}' && b == '{'))

int		ft_strlen(char *str)
{
		int i = 0;
		while (str[i])
			i++;
		return (i);
}

int		brackets(char *str)
{
		int i = 0;
		int store[ft_strlen(str)];

		while (*str)
		{
			if (*str == '(' || *str == '[' || *str == '{')
				store[++i] = *str;
			else if (*str == ')' || *str == ']' || *str == '}')
			{
				if (MATCH(*str, store[i]) == 0)
					return (-1);
				--i;
			}
			str++;
		}
		if (i != 0)
			return (-1);
		return (0);
}

int		main(int ac, char **av)
{
		int i = 1;
		if (ac < 2)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (i < ac)
		{
			if (brackets(av[i]) == -1)
				write(1, "Error\n", 6);
			if (brackets(av[i]) == 0)
				write(1, "OK\n", 3);
			i++;
		}
		return (0);
}
