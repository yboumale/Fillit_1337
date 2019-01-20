/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:42:25 by yboumale          #+#    #+#             */
/*   Updated: 2018/12/05 15:23:17 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	ft_delete_point(t_table *t, t_count *c, t_point *p, char a)
{
	t_point	*cur;

	cur = p;
	while (cur != NULL)
	{
		if (cur->a == a)
			t->tab[cur->point_x + c->x][cur->point_y + c->y] = '.';
		else
			break ;
		cur = cur->next;
	}
}
