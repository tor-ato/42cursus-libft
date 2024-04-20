/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:50:03 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/20 16:15:58 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
// 	int test3;
// 	test3 = 128;
// 	int test4;
// 	test4 = -1;
// 	char test5;
// 	test5 = '^';

// 	printf("\n");

// 	printf("test1 \n");
// 	printf("origin\t%d\n", isalnum(test1));
// 	printf("ft\t%d\n", ft_isalnum(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", isalnum(test2));
// 	printf("ft\t%d\n", ft_isalnum(test2));
// 	printf("\n");

// 	printf("test3 \n");
// 	printf("origin\t%d\n", isalnum(test3));
// 	printf("ft\t%d\n", ft_isalnum(test3));
// 	printf("\n");

// 	printf("test4 \n");
// 	printf("origin\t%d\n", isalnum(test4));
// 	printf("ft\t%d\n", ft_isalnum(test4));
// 	printf("\n");

// 	printf("test5 \n");
// 	printf("origin\t%d \n", isalnum(test5));
// 	printf("ft\t%d\n", ft_isalnum(test5));
// }