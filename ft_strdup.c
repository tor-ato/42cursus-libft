/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:49:14 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/28 17:14:31 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		s_len;

	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * s_len + 1);
	if (!str)
		return (NULL);
	if (ft_memcpy(str, s, s_len))
	{
		*(str+s_len)=0;
		return (str);
	}
	return (NULL);
}

// #include <limits.h>
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*a1;
// 	char	*a2;

// 	a1 = "12345";
// 	a2 = "12345";
// 	printf("\n");
// 	printf("ans\t %s \n", strdup(a1));
// 	printf("ans\t %s \n", ft_strdup(a2));
// 	printf("\n");
// 	return (0);
// }

// NULL文字だけダメ