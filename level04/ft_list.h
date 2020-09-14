/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:24:17 by jpartane          #+#    #+#             */
/*   Updated: 2020/09/14 10:28:14 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "FT_LIST_H"
# define "FT_LIST_H"

typedef struct		s_list
{
	struct s_list 	*next;
	void			*data;
}					t_list;

#endif
