/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:26:11 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 16:26:04 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test1;
// 	char test2;

// 	test1 = 'A';
// 	test2 = 'a';

// 	printf("\n");

// 	printf("test1 \n");
// 	printf("origin\t%d\n", islower(test1));
// 	printf("ft\t%d\n", ft_islower(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", islower(test2));
// 	printf("ft\t%d\n", ft_islower(test2));
// 	printf("\n");
// }
