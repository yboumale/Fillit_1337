/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 17:48:20 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/09 20:38:31 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **list, t_list *elm)
{
	t_list	*cur;

	if (*list == NULL)
		*list = elm;
	else
	{
		cur = *list;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = elm;
	}
}
