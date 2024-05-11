/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:40:18 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 17:10:18 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *)s);
		if (!*s++)
			return ((char *)0);
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *test1s;
// 	test1s = "12345";
// 	char test1c;
// 	test1c = '5';
// 	printf("origin\t%s\n", strchr(test1s, test1c));
// 	printf("ft\t%s\n", ft_strchr(test1s, test1c));
// }
