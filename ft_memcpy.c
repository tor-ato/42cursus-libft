/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:47:22 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/26 16:27:13 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	while (n--)
		*char_dest++ = *char_src++;
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1d[10];
// 	char str1s[] = "12345";

// 	memcpy(str1d, str1s, sizeof(str1s) + 1);

// 	printf("origin\t %s \n", str1d);

// 	char str2d[10];
// 	char str2s[] = "12345";

// 	ft_memcpy(str2d, str2s, sizeof(str2s) + 1);

// 	printf("ft_\t %s \n", str2d);

// 	return (0);
// }