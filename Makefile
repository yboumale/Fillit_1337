# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouzzine <ouzzine.ismail@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 20:21:38 by iouzzine          #+#    #+#              #
#    Updated: 2018/11/09 20:39:00 by iouzzine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = src/*.c
LIBFTSRC = libft/
LIBFTLIB = libft/libft.a

all: $(NAME)

$(NAME):
	@make re -C $(LIBFTSRC)
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@gcc -o $(NAME) fillit.c *.o $(LIBFTLIB)

clean:
	@/bin/rm -f *.o
	@/bin/rm -f $(LIBFTSRC)*.o

fclean: clean
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf $(LIBFTLIB)

re : fclean all
