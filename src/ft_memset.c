/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:46:20 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/25 17:58:32 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*return_add;

	return_add = str;
	while (n--)
		*(char *)str++ = (char)c;
	return (return_add);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int a = 10;
// 	char b = 'A';

// 	char str1[a];

// 	printf("origin\t %s \n", memset(str1, b, a));

// 	char str2[a];

// 	printf("ft_\t %s \n", ft_memset(str2, b, a));

// 	return (0);
// }