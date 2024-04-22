/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:39:46 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/22 21:53:17 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n != 0)
	{
		if (!(*s1 == *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *test1s1;
// 	test1s1 = "12345";
// 	char *test1s2;
// 	test1s2 = "12a45";
// 	int test1;
// 	test1 = 3;
// 	printf("origin\t%d\n", strncmp(test1s1, test1s2, test1));
// 	printf("ft\t%d\n", ft_strncmp(test1s1, test1s2, test1));
// }