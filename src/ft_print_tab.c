/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:06:41 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 19:55:11 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	ft_print_tab(t_table *tab)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < tab->size)
	{
		while (x < tab->size)
		{
			ft_putchar(tab->tab[y][x]);
			x++;
		}
		ft_putendl("");
		x = 0;
		y++;
	}
}
