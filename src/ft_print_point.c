/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:40:40 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 19:54:56 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	ft_print_point(t_table *t, t_count *c, t_point *p, char a)
{
	t_point	*cur;

	cur = p;
	while (cur != NULL)
	{
		if (cur->a == a)
			t->tab[cur->point_x + c->x][cur->point_y + c->y] = a;
		else
			break ;
		cur = cur->next;
	}
}
