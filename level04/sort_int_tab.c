/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:50:33 by jpartane          #+#    #+#             */
/*   Updated: 2020/09/14 10:59:35 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
		int		tmp;
		unsigned int i;
		unsigned int j;

		i = 0;
		while (i < size - 1)
		{
				j = i;
				while (j < size)
				{
						if (tab[i] > tab[j])
						{
							tmp = tab[i];
							tab[i] = tab[j];
							tab[j] = tmp;
						}
						j += 1;
				}
				i += 1;
		}
}
