/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:48:23 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 16:33:28 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(char *)s1++ != *(char *)s2++)
			return (*(unsigned char *)(s1 - 1) - *(unsigned char *)(s2 - 1));
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = {0, 0, 127, 0};
// 	char s2[] = {0, 0, 42, 0};
// 	int n = 4;

// 	// char s1[] = "12345";
// 	// char s2[] = "12845";
// 	// int n = 4;

// 	printf("\n");
// 	printf("origin\t %d \n", memcmp(s1, s2, n));
// 	printf("ft_\t %d \n", ft_memcmp(s1, s2, n));
// 	printf("\n");

// 	return (0);
// }
