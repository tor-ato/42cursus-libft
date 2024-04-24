/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:12:00 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/24 15:35:47 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (dst_len + src_len);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char test1d[30] = "BBBB";
// 	char test1s[] = "AAAAAAAAA";
// 	int dstsize = 13;

// 	printf("origin\t%lu\n", strlcat(test1d, test1s, dstsize));
// 	printf("dest\t%s\n", test1d);
// 	printf("\n");

// 	char test2d[30] = "BBBB";
// 	char test2s[] = "AAAAAAAAA";

// 	printf("ft\t%lu\n", ft_strlcat(test2d, test2s, dstsize));
// 	printf("dest\t%s\n", test2d);
// 	printf("\n");
// }