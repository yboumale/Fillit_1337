/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:58:24 by yboumale          #+#    #+#             */
/*   Updated: 2018/12/05 15:22:22 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

t_table		*ft_table(int size)
{
	int		i;
	int		j;
	t_table	*tab;

	tab = (t_table *)malloc(sizeof(*tab));
	tab->size = size;
	tab->tab = (char **)malloc(sizeof(char *) * tab->size);
	i = 0;
	j = 0;
	while (i < tab->size)
	{
		tab->tab[i] = ft_strnew(tab->size);
		while (j < tab->size)
		{
			tab->tab[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
