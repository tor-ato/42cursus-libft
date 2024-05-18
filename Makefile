# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 01:33:09 by tkitahar          #+#    #+#              #
#    Updated: 2024/05/18 13:31:00 by tkitahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILENAME =	\
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memchr \
		ft_memmove \
		ft_memcmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isspace \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_islower \
		ft_isupper \
		ft_calloc \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_strldup \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_strltrim \
		ft_abs \
		ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstiter \
		ft_lstmap \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear

OBJS = $(addprefix objs/, $(addsuffix .o,$(FILENAME)))

CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rsc $@ $^

objs/%.o : src/%.c
	$(CC)  $(CFLAGS) $(INCLUDES) -c $^ -o $@

clean :
	$(RM)  $(OBJS)

fclean : clean
	$(RM)  $(NAME)

re : fclean all

bonus : all

.PHONY: all clean fclean re tst


