/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:10:58 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 12:33:32 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*res;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (!len || start > s_len)
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	if (s_len - start < len)
		res = malloc(sizeof(char) * (s_len - start + 1));
	else
		res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, (len + 1));
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	unsigned int start = 1;
// 	size_t len = 1;

// 	printf("ft_substr\t%s\n", ft_substr(s, start, len));

// 	return (0);
// }