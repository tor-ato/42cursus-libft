# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/05/06 17:48:53 by tkitahar         ###   ########.fr        #
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
		ft_isspace.o \
		ft_isprint.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_islower.o \
		ft_isupper.o \
		ft_calloc.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_strldup.o \
		ft_split.o \
		ft_itoa.o \
		ft_strmapi.o \
		ft_striteri.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o \
		ft_strltrim.o \
		ft_abs.o


CFLAGS = -Wall -Wextra -Werror


test = \
	ft_strmapi.o \
	ft_strdup.o \
	ft_memcpy.o \
	ft_strlen.o




debug = \
	ft_strtrim.c \




all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rsc $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) $^ 

clean : 
	$(RM)  $(OBJS)

fclean : clean
	$(RM)  $(NAME)

re : fclean all

tst :  $(test)
	$(CC) $(CFLAGS) -g -fsanitize=address $^
	./a.out



debug :  re
	$(CC) $(CFLAGS)  -g -fsanitize=address $(debug)
	./a.out


.PHONY: all clean fclean re tst


