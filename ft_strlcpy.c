/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:39:06 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/23 20:28:33 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (0 < dstsize)
	{
		while (--dstsize && *src)
			*dst++ = *src++;
		*dst = 0;
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int dstsize = -1;

// 	char test1d[10] = "AAAAAAAAA";
// 	char test1s[] = "coucou";
// 	size_t test1n = dstsize;
// 	printf("origin\t%lu\n", strlcpy(test1d, test1s, test1n));
// 	printf("dest\t%s\n", test1d);
// 	printf("\n");

// 	char test2d[10] = "AAAAAAAAA";
// 	char test2s[] = "coucou";
// 	size_t test2n = dstsize;
// 	printf("ft\t%zu\n", ft_strlcpy(test2d, test2s, test2n));
// 	printf("dest\t%s\n", test2d);
// 	printf("\n");
// }