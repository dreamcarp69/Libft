# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakorzar <kakorzar@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:57:04 by kakorzar          #+#    #+#              #
#    Updated: 2023/01/22 16:58:47 by kakorzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c printf_utils.c hexa.c ft_itoaprint.c

OBJ = $(SRC:%.c=%.o)

LIBFT = libft

LIB = libft.a

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	$(CC) $(CFLAGS) -c $(SRC) -I $(LIBFT)
	ar rc $(NAME) $(OBJ) $(LIBFT)/*.o
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)/$(LIB)

re: fclean all

.PHONY: all bonus clean fclean re
