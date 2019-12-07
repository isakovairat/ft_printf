# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycameron <ycameron@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 16:55:20 by ycameron          #+#    #+#              #
#    Updated: 2019/12/07 18:23:59 by ycameron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = src/*.c
OBJECTS = $(SOURCES:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME):

%.o: %.c ft_printf.h
	$(CC)

clean:
	/bin/rm -f $(OBJECTS)

fcelan:
	/bin/rm -f $(NAME)

re: fcelan all

.PHONY all clean fclean re