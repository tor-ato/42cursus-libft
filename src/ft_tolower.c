/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:16:26 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 17:13:40 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test1;
// 	test1 = 'A';
// 	char test2;
// 	test2 = 'a';
// 	char test3;
// 	test3 = '!';
// 	char test4;
// 	test4 = '~';
// 	char test5;
// 	test5 = '^';

// 	printf("\n");
// 	printf("test1\t%c\n", test1);
// 	printf("origin\t%c\n", toupper(test1));
// 	printf("ft\t%c\n", ft_tolower(test1));
// 	printf("\n");

// 	printf("test2\t%c\n", test2);
// 	printf("origin\t%c\n", tolower(test2));
// 	printf("ft\t%c\n", ft_tolower(test2));
// 	printf("\n");

// 	printf("test3 \n");
// 	printf("origin\t%c\n", tolower(test3));
// 	printf("ft\t%c\n", ft_tolower(test3));
// 	printf("\n");

// 	printf("test4 \n");
// 	printf("origin\t%c\n", tolower(test4));
// 	printf("ft\t%c\n", ft_tolower(test4));
// 	printf("\n");

// 	printf("test5 \n");
// 	printf("origin\t%c \n", tolower(test5));
// 	printf("ft\t%c\n", ft_tolower(test5));
// }
