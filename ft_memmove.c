/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:54:05 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/27 18:26:24 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	if (dest < src)
	{
		while (n--)
			*char_dest++ = *char_src++;
		printf("dest < src \t b\n");
	}
	else
	{
		char_dest += n;
		char_src += n;
		while (n--)
			*char_dest-- = *char_src--;
		printf("dest > src \t a\n");
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1d[] = {0, 0, 0, 0, 0, 0, 0};

	char str1s[] = {65, 66, 67, 68, 69, 0, 45};

	memmove(str1d, str1s + 2, sizeof(str1s) - 2);

	printf("origin\t %s \n", str1d);

	char str2d[] = {0, 0, 0, 0, 0, 0, 0};
	char str2s[] = {65, 66, 67, 68, 69, 0, 45};

	ft_memmove(str2s, str2s + 2, sizeof(str2s) - 2);

	printf("ft_\t %s \n", str2d);

	return (0);
}