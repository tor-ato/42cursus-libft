/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:19:35 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/17 21:45:29 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test1;
// 	char test2;

// 	test1 = '1';
// 	test2 = 'a';

// 	printf("\n");

// 	printf("test1 \n");
// 	printf("origin\t%d\n", isdigit(test1));
// 	printf("ft\t%d\n", ft_isdigit(test1));
// 	printf("\n");

// 	printf("test2 \n");
// 	printf("origin\t%d\n", isdigit(test2));
// 	printf("ft\t%d\n", ft_isdigit(test2));
// 	printf("\n");
// }