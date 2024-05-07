/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:41:00 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 13:53:08 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (1)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
		if (!len--)
			return ((char *)0);
	}
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *test1s;
// 	char test1c;

// 	test1s = "12345";
// 	test1c = '5';
// 	printf("origin\t%s\n", strrchr(test1s, test1c));
// 	printf("ft\t%s\n", ft_strrchr(test1s, test1c));
// }