/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:02 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/06 16:01:10 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			str[12];
	unsigned int	absed_n;
	int				i;

	i = 12;
	str[--i] = 0;
	absed_n = ft_abs(n);
	while (absed_n)
	{
		str[--i] = (char)'0' + (absed_n % 10);
		absed_n /= 10;
	}
	if (n < 0)
		str[--i] = '-';
	if (n == 0)
		str[--i] = '0';
	return (ft_strdup(&str[i]));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *(*test)(int);
// 	test = ft_itoa;
// 	int n = 0;
// 	printf("ft_itoa\t%s\n", test(n));
// 	return (0);
// }