/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:27:18 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 18:39:08 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

void	ft_solve(t_table *tab, t_point *tetris, char a)
{
	a = 'A';
	while (ft_valid(tab, tetris, a) == 0)
	{
		tab->size++;
		a = 'A';
		tab = ft_table(tab->size);
	}
	ft_print_tab(tab);
}
