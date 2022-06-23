# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfarias- <lfarias-@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 18:31:24 by lfarias-          #+#    #+#              #
#    Updated: 2022/06/23 13:16:30 by lfarias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -c
LIBFT_DIR = ./libft/
SRC = ft_hexstr.c ft_printf.c ft_ptoa.c ft_utoa.c
OBJ = $(SRC:.c=.o)

$(NAME):
	 make -C $(LIBFT_DIR) libft.a 
	 cp ./libft/libft.a ./libftprintf.a
	 $(CC) $(CFLAGS) -I. $(SRC)
	 ar -qs $(NAME) $(OBJ) 

all: $(NAME)

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_DIR)libft.a

re: fclean all

.PHONY:
	all clean fclean re
