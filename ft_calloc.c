/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:48:54 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/28 16:41:24 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size && (count > SIZE_MAX / size))
		return (NULL);
	ret = malloc(count * size);
	if (ret)
		ft_bzero(ret, count * size);
	return (ret);
}

// if (size && (count * size) / size != count)
// 	return (NULL);

// #include <limits.h>
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*a1;
// 	char	*a2;
// 	size_t	n;
// 	size_t	m;

// 	n = 2;
// 	m = 2;
// 	a1 = calloc(n, m);
// 	a2 = ft_calloc(n, m);
// 	printf("\n");
// 	printf("ans\t %d \n", memcmp(a1, a2, n));
// 	printf("\n");
// 	return (0);
// }

// count * size < SIZE_MAX;
// count  < SIZE_MAX / size;