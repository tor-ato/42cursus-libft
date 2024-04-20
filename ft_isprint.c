/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:50:10 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/20 16:32:41 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((32 <= c) && (c <= 126))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test1;
// 	test1 = ' ';
// 	char test2;
// 	test2 = '~';
// 	// int test3;
// 	// test3 = 128;
// 	// int test4;
// 	// test4 = -1;
// 	// char test5;
// 	// test5 = '^';

// 	printf("\n");

// 	printf("test1 \n");
// 	printf("origin\t%d\n", isprint(test1));
// 	printf("ft\t%d\n", ft_isprint(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", isprint(test2));
// 	printf("ft\t%d\n", ft_isprint(test2));
// 	printf("\n");

// 	// printf("test3 \n");
// 	// printf("origin\t%d\n", isprint(test3));
// 	// printf("ft\t%d\n", ft_isprint(test3));
// 	// printf("\n");

// 	// printf("test4 \n");
// 	// printf("origin\t%d\n", isprint(test4));
// 	// printf("ft\t%d\n", ft_isprint(test4));
// 	// printf("\n");

// 	// printf("test5 \n");
// 	// printf("origin\t%d \n", isprint(test5));
// 	// printf("ft\t%d\n", ft_isprint(test5));
// }