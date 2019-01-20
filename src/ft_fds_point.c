/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fds_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:16:26 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 20:27:30 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int			ft_min_x(t_point *tetris, char a)
{
	int		i;
	t_point *t;

	t = tetris;
	while (a != t->a)
		t = t->next;
	i = t->point_x;
	while (t != NULL)
	{
		if (i > t->point_x)
			i = t->point_x;
		t = t->next;
	}
	return (i);
}

int			ft_min_y(t_point *tetris, char a)
{
	int		j;
	t_point *t1;

	t1 = tetris;
	while (a != t1->a)
		t1 = t1->next;
	j = t1->point_y;
	while (t1 != NULL)
	{
		if (j > t1->point_y)
			j = t1->point_y;
		t1 = t1->next;
	}
	return (j);
}

t_point		*newlistpoint(t_point *tetris, char a)
{
	int		c1;
	int		c2;
	t_point *nl;

	nl = tetris;
	c1 = ft_min_x(nl, a);
	c2 = ft_min_y(nl, a);
	while (nl != NULL)
	{
		if (nl->a == a)
		{
			nl->point_x = nl->point_x - c1;
			nl->point_y = nl->point_y - c2;
		}
		nl = nl->next;
	}
	return (tetris);
}

t_point		*ft_str_point(t_point *tetris, char *str, char a)
{
	int		i;
	int		h;
	t_point *c;
	t_point	*mypoint;

	i = 0;
	h = 0;
	while (*str != 0)
	{
		if (*str == '.')
			h++;
		if (*str == '\n')
		{
			h = 0;
			i++;
		}
		if (*str == '#')
		{
			mypoint = ft_newpoint(a, i, h);
			tetris = ft_addpoint(tetris, mypoint);
			h++;
		}
		str++;
	}
	return (c = newlistpoint(tetris, a));
}

t_point		*ft_fds_point(char *buff, t_point *tetris, char a)
{
	int		i;
	char	*str;
	int		h;

	i = 0;
	h = 0;
	str = ft_strsub(buff, 0, 21);
	tetris = ft_str_point(tetris, str, a);
	return (tetris);
}
