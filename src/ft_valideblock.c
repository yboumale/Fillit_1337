/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valideblock.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:46:55 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 18:40:10 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		ft_valideblock(char *buff)
{
	if (ft_tetri_validation(buff) == 1 && ft_block_validation(buff) == 1)
	{
		return (1);
	}
	return (0);
}
