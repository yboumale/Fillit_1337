/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validepoint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:31:45 by yboumale          #+#    #+#             */
/*   Updated: 2018/12/05 15:21:56 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int			ft_point_v(t_table *tab, t_point *point, t_count *co, char a)
{
	t_point *cur;
	int		i;

	i = tab->size;
	cur = point;
	while (cur != NULL)
	{
		if (cur->a == a)
		{
			if (i > (cur->point_x + co->x) && i > (cur->point_y + co->y))
			{
				if (tab->tab[cur->point_x + co->x][cur->point_y + co->y] != '.')
					return (0);
			}
			else
				return (0);
		}
		else
			break ;
		cur = cur->next;
	}
	ft_print_point(tab, co, point, a);
	return (1);
}

t_count		*new_count(int x, int y)
{
	t_count	*co;

	co = (t_count *)malloc(sizeof(*co));
	co->x = x;
	co->y = y;
	return (co);
}

int			ft_cr(t_point **cr, char a)
{
	while (*cr)
	{
		if ((*cr)->a == a)
			break ;
		*cr = (*cr)->next;
	}
	if (*cr == NULL)
		return (1);
	return (0);
}

int			ft_valid(t_table *tab, t_point *point, char a)
{
	t_point	*cr;
	int		x;
	int		y;

	x = 0;
	cr = point;
	if (ft_cr(&cr, a))
		return (1);
	while (x < tab->size)
	{
		y = 0;
		while (y < tab->size)
		{
			if (ft_point_v(tab, cr, new_count(x, y), a) == 1)
			{
				if (ft_valid(tab, cr, a + 1) == 1)
					return (1);
				else
					ft_delete_point(tab, new_count(x, y), cr, a);
			}
			y++;
		}
		x++;
	}
	return (0);
}
