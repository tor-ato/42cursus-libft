/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:09:22 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/20 16:03:32 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
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

// 	printf("test1 \n");
// 	printf("origin\t%d\n", isalpha(test1));
// 	printf("ft\t%d\n", ft_isalpha(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", isalpha(test2));
// 	printf("ft\t%d\n", ft_isalpha(test2));
// 	printf("\n");

// 	printf("test3 \n");
// 	printf("origin\t%d\n", isalpha(test3));
// 	printf("ft\t%d\n", ft_isalpha(test3));
// 	printf("\n");

// 	printf("test4 \n");
// 	printf("origin\t%d\n", isalpha(test4));
// 	printf("ft\t%d\n", ft_isalpha(test4));
// 	printf("\n");

// 	printf("test5 \n");
// 	printf("origin\t%d \n", isalpha(test5));
// 	printf("ft\t%d\n", ft_isalpha(test5));
// }