/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:47:06 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/26 14:23:06 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const int a = 3;

// 	char str1[a] = "12345";
// 	bzero(str1, a);

// 	printf("origin\t %s \n", str1);

// 	char str2[a] = "12345";
// 	ft_bzero(str2, a);

// 	printf("ft_\t %s \n", str2);

// 	return (0);
// }