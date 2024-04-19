# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/04/18 21:10:26 by tkitahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = \
		ft_isalpha.o \
		ft_islower.o \
		ft_isupper.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_isdigit.o

# CFILES = \
# 		ft_isalpha.c \
# 		ft_islower.c \
# 		ft_isupper.c \
# 		ft_toupper.c \
# 		ft_tolower.c \
# 		ft_isdigit.c

CFLAGS = -Wall -Wextra -Werror


TESTFILES = \
 		ft_isdigit.c \

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rsc $(NAME) $(OBJS)

%.o : %.c
	$(CC) -c $(CFLAGS) $^ 

clean : 
	$(RM)  $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

test :  $(TESTFILES)
	$(CC) $(CFLAGS) $^
	./a.out


