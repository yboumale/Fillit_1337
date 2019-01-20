/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 23:17:40 by yboumale          #+#    #+#             */
/*   Updated: 2018/11/10 14:46:02 by iouzzine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"

typedef struct		s_count
{
	int				x;
	int				y;
}					t_count;

typedef struct		s_point
{
	char			a;
	int				point_x;
	int				point_y;
	struct s_point	*next;
}					t_point;

typedef	struct		s_table
{
	int				size;
	char			**tab;
}					t_table;

int					ft_hashbas(char *tetric, int x);
int					ft_hashhaut(char *tetric, int x);
int					ft_hashleft(char *tetric, int x);
int					ft_hashright(char *tetric, int x);
int					ft_open_file(char *file);
int					ft_block_validation(char *buff);
int					ft_tetri_validation(char *buff);
t_point				*ft_addpoint(t_point *tetris, t_point *point);
t_point				*ft_newpoint(char a, int x, int y);
int					ft_validepoint(t_table *tab, t_point *point, t_point *pt);
int					ft_valideblock(char *buff);
t_point				*ft_fds_point(char *buff, t_point *tetris, char a);
t_table				*ft_table(int size);
int					ft_valid(t_table *tab, t_point *tetris, char a);
void				ft_print_tab(t_table *tab);
void				ft_print_point(t_table *t, t_count *c, t_point *p, char a);
void				ft_delete_point(t_table *t, t_count *c, t_point *p, char a);
void				ft_solve(t_table *tab, t_point *tetris, char a);
#endif
