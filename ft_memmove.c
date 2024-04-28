/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:54:05 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/28 13:14:11 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	unsigned const char	*char_src;

	char_dest = dest;
	char_src = src;
	if (dest < src)
	{
		while (n--)
			*char_dest++ = *char_src++;
	}
	else
	{
		char_dest = char_dest + n - 1;
		char_src = char_src + n - 1;
		while (n--)
			*char_dest-- = *char_src--;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     char str1s[] = "123456";
// 	char str1[] =  "112456";

// 	memmove(str1s + 1, str1s, 2  );

//     printf("\n");
// 	printf("origin\tstr1s\t %s \n", str1s);
//     printf("expec str1\t %s \n", str1);
//     printf("\n");

//     char str2s[] = "123456";
// 	char str2[] =  "112456";

// 	ft_memmove(str2s + 1, str2s, 2);

//     printf("\n");
// 	printf("ft_\tstr2s\t %s \n", str2s);
//     printf("expec str2\t %s \n", str2);
//     printf("\n");

// 	return (0);
// }