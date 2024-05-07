/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:50:07 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 14:15:25 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
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
// 	printf("origin\t%d\n", isascii(test1));
// 	printf("ft\t%d\n", ft_isascii(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", isascii(test2));
// 	printf("ft\t%d\n", ft_isascii(test2));
// 	printf("\n");

// 	printf("test3 \n");
// 	printf("origin\t%d\n", isascii(test3));
// 	printf("ft\t%d\n", ft_isascii(test3));
// 	printf("\n");

// 	printf("test4 \n");
// 	printf("origin\t%d\n", isascii(test4));
// 	printf("ft\t%d\n", ft_isascii(test4));
// 	printf("\n");

// 	printf("test5 \n");
// 	printf("origin\t%d \n", isascii(test5));
// 	printf("ft\t%d\n", ft_isascii(test5));
// }