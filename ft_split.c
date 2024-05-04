/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:15 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/04 22:03:27 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_freeall(char **res, size_t len)
{
	while (--len)
		free(*--res);
	free(res);
	return (1);
}

static size_t	ft_split_arraycount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	splited_arraysize;
	size_t	splited_arraysize_tmp;
	char	*stmp;

	splited_arraysize = ft_split_arraycount(s, c);
	res = (char **)ft_calloc(splited_arraysize + 1, sizeof(char *));
	if (!res)
		return (NULL);
	splited_arraysize_tmp = splited_arraysize;
	while (splited_arraysize_tmp && splited_arraysize--)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			stmp = (char *)s;
		while (*s && *s != c)
			s++;
		*res = ft_strldup(stmp, s - stmp);
		if (!*res && ft_freeall(res, splited_arraysize_tmp - splited_arraysize))
			return (NULL);
		res++;
	}
	return (res - splited_arraysize_tmp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "aaAAaaBBaaCCaa";
// 	char set = 'a';
// 	char **res = ft_split(s1, set);

// 	while (*res)
// 		printf("ft_split\t%s\n", *res++);
// 	(void)res;
// 	return (0);
// }