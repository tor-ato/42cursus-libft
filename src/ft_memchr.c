/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:48:11 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 16:34:17 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s++ == (char)c)
			return ((void *)s - 1);
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "12345";
// 	char c = '4';
// 	int i = 5;

// 	printf("\n");
// 	printf("origin\t %p \n", memchr(str, c, i));
// 	printf("ft_\t %p \n", ft_memchr(str, c, i));
// 	printf("\n");

// 	printf("\n");
// 	printf("origin\t %s \n", memchr(str, c, i));
// 	printf("ft_\t %s \n", ft_memchr(str, c, i));
// 	printf("\n");

// 	return (0);
// }
