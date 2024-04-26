# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/04/26 16:20:26 by tkitahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS =	\
		ft_strlen.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strnstr.o \
		ft_strncmp.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memchr.o \
		ft_memmove.o \
		ft_memcmp.o \
		ft_atoi.o \
		ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_calloc.o \
		ft_strdup.o 

CFLAGS = -Wall -Wextra -Werror

TESTFILES = \
		ft_memcpy.o

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


