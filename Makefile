# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/04/19 09:48:48 by tkitahar         ###   ########.fr        #
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

CFLAGS = -Wall -Wextra -Werror

TESTFILES = \
 		ft_isdigit.c \

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rsc $@ $^

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


