/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:20:12 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 19:51:42 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

t_point		*ft_addpoint(t_point *tetris, t_point *point)
{
	t_point *cur;

	if (tetris == NULL)
	{
		tetris = (t_point *)malloc(sizeof(*tetris));
		tetris = point;
	}
	else
	{
		cur = tetris;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = point;
	}
	return (tetris);
}
