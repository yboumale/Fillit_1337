/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 14:01:49 by yboumale          #+#    #+#             */
/*   Updated: 2018/12/05 15:20:13 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_block_validation(char *buff)
{
	int l;
	int x;

	x = 0;
	l = 0;
	while (buff[x] && x < 21)
	{
		if (buff[x] == '#')
			l++;
		if (x != 4 && x != 9 && x != 14 && x != 19 && x != 20)
		{
			if (buff[x] != '.' && buff[x] != '#')
				return (0);
		}
		else if (buff[x] != '\n')
			return (0);
		x++;
	}
	if (l != 4)
		return (0);
	return (1);
}
