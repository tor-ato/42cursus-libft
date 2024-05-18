/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:12:02 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/06 19:31:38 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = -1;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}

// static char	ft_shiftchar(unsigned int i, char c)
// {
// 	c += i;
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char c;
// 	c = '1';
// 	unsigned int i;
// 	i = 1;

// 	// printf("ft_shiftchar \t %c \n", ft_shiftchar(i, c));

// 	char s[] = "11111";
// 	char *stest = ft_strmapi(s, ft_shiftchar);

// 	printf("ft_strmapi \t %s \n", stest);
// 	(void)stest;
// 	return (0);
// }