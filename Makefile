# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 11:58:32 by ebarguil          #+#    #+#              #
#    Updated: 2021/03/08 11:36:17 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			utils/*.c \
#			utils/flag_init.c \
			utils/ft_bzero.c \
			utils/ft_isdigit.c \
			utils/ft_strchr.c \
			utils/print_all_char.c \
			utils/print_all_nbr.c \
			utils/print_all_nbr2.c \
			utils/print_all_hex.c \
			utils/print_all_str.c \
			utils/ft_strlen.c \
			utils/ft_nbrlen.c \
			utils/ft_itoa.c \
			utils/ft_itoa_u.c \

SRCS_O	=	ft_printf.o \
			flag_init.o \
			ft_bzero.o \
			ft_isdigit.o \
			ft_strchr.o \
			print_all_char.o \
			print_all_nbr.o \
			print_all_nbr2.o \
			print_all_hex.o \
			print_all_str.o \
			ft_strlen.o \
			ft_nbrlen.o \
			ft_itoa.o \
			ft_itoa_u.o \

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -c
RM		=	rm -f
NORM	=	norminette *.h && norminette *.c && norminette */*.c

OBJS	=	$(SRCS:%.c=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	ar rcs $(NAME) $(SRCS_O)

$(OBJS)	:	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

n		:
	$(NORM)

clean	:
	$(RM) $(SRCS_O)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
