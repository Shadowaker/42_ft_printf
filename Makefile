# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 16:33:24 by dridolfo          #+#    #+#              #
#    Updated: 2022/01/24 17:52:16 by dridolfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./libftprintf.a

SRC = srcs/ft_printf.c \
srcs/ft_num_utils.c \
srcs/ft_printf_utils.c \

OBJS = $(SRC:.c=.o)

HDRS = include/ft_printf.h

RM = rm -f

CC = gcc -Wall -Wextra -Werror

.c.o = ${CC} -I ${HDRS} includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME) ${OBJS}

re: $(NAME)

.PHONY: all clean fclean re
