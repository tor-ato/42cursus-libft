# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/04/22 19:53:01 by tkitahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = \
		ft_isalpha.o \
		ft_islower.o \
		ft_isupper.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_isdigit.o \
		ft_isascii.o \
		ft_isalnum.o \
		ft_isprint.o \
		ft_islower.o \
		ft_strlen.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strncmp.o \
		ft_strnstr.o 

CFLAGS = -Wall -Wextra -Werror

TESTFILES = \
		ft_strrchr.o \
		ft_strlen.o


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

tst :  $(TESTFILES)
	$(CC) $(CFLAGS) $^
	./a.out


