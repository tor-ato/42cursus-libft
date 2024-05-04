/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strltrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:39:49 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/04 15:02:42 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strltrim(char const *s1, char const *set, size_t len)
{
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	s2 = (char *)s1 + len;
	while (s1 < s2 && ft_strchr(set, *s1))
		++s1;
	while (s1 < s2 && ft_strrchr(set, *s2))
		--s2;
	if (s1 == s2 && (!*s1 && !*s2))
		return (ft_strldup(s1, s2 - s1));
	return (ft_strldup(s1, s2 - s1 + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "AAaaBBaaCC";
// 	char	set[] = "a";

// 	printf("ft_stltrim\t%s\n", ft_strltrim(s1, set, 4));
// 	return (0);
// }
