/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:16:20 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 19:54:04 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

t_point		*ft_newpoint(char a, int x, int y)
{
	t_point *point;

	point = (t_point *)malloc(sizeof(t_point));
	if (point == NULL)
		return (0);
	point->a = a;
	point->point_x = x;
	point->point_y = y;
	point->next = NULL;
	return (point);
}
