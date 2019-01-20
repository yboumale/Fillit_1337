/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 14:02:14 by yboumale          #+#    #+#             */
/*   Updated: 2018/12/05 15:20:59 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_tetri_validation(char *buff)
{
	int x;
	int l;

	l = 0;
	x = 0;
	while (buff[x] && x <= 21)
	{
		if (buff[x] == '#')
		{
			if (ft_hashright(buff, x) == 1)
				l++;
			if (ft_hashleft(buff, x) == 1)
				l++;
			if (ft_hashbas(buff, x) == 1)
				l++;
			if (ft_hashhaut(buff, x) == 1)
				l++;
		}
		x++;
	}
	if (l == 6 || l == 8)
		return (1);
	return (0);
}
