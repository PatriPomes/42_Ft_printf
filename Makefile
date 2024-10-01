# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 14:40:42 by pamanzan          #+#    #+#              #
#    Updated: 2024/07/04 15:11:08 by pamanzan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBS		= ft_printf.h

SRCS		= ft_hexa.c ft_printf.c ft_decim_us.c ft_hex_lo.c ft_putchar_sp.c ft_entero.c ft_hex_up.c ft_putstr_sp.c
OBJS		=  ft_hexa.o ft_printf.o ft_decim_us.o ft_hex_lo.o ft_putchar_sp.o ft_entero.o ft_hex_up.o ft_putstr_sp.o

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RANLIB		= ranlib

RM			= rm -f
TOUCH		= touch

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

%.o : %.c $(LIBS)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(OBJS)
			$(RM) $(NAME)
			$(RM)

re:			fclean $(NAME)


.PHONY:		all clean fclean re
