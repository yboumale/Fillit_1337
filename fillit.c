/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 14:02:40 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/10 14:53:13 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		message_error(void)
{
	ft_putstr("error\n");
}

int			message_usage(void)
{
	ft_putstr("Usage : ./fillit URL_FILE\n");
	return (0);
}

int			check_error(int ret, char *buff)
{
	if (ret == 0 && buff[0] == '\0')
	{
		message_error();
		return (0);
	}
	if (buff[19] == '\n' && buff[20] == '\n')
	{
		message_error();
		return (0);
	}
	return (1);
}

t_point		*ft_file_solve(int fd, char *buff, t_point *tetris, char a)
{
	int ret;
	int l;

	l = 0;
	while ((ret = read(fd, buff, 21)) && l < 26)
	{
		if (ret > 0)
		{
			buff[ret] = '\0';
			if (ft_valideblock(buff) == 1)
			{
				tetris = ft_fds_point(buff, tetris, a);
				a++;
			}
			else
			{
				message_error();
				return (0);
			}
		}
		l++;
	}
	if (check_error(ret, buff) == 0)
		return (0);
	return (tetris);
}

int			main(int argc, char **argv)
{
	char	*buff;
	int		fd;
	char	a;
	t_table *tab;
	t_point *tetris;

	tab = (t_table *)malloc(sizeof(*tab));
	a = 'A';
	tab->size = 2;
	tab = ft_table(tab->size);
	tetris = NULL;
	buff = ft_strnew(sizeof(char) * 21);
	if (argc == 2 && (fd = ft_open_file(argv[1])))
	{
		tetris = ft_file_solve(fd, buff, tetris, a);
		if (tetris == NULL)
			return (0);
		ft_solve(tab, tetris, a);
	}
	else
		return (message_usage());
	return (1);
}
