# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouzzine <ouzzine.ismail@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 20:33:07 by iouzzine          #+#    #+#              #
#    Updated: 2018/11/09 20:35:31 by iouzzine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_C = *.c

SRC_O = *.o

C_FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		@gcc $(C_FLAGS) -c $(SRC_C)
		@ar rc $(NAME) $(SRC_O)

clean:
		@/bin/rm -f $(SRC_O)

fclean: clean
		@/bin/rm  -f $(NAME)

re: fclean all
