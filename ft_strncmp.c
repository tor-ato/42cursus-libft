/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:39:46 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 15:30:34 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((!s1 || !s2) && n == 0)
		return (0);
	while ((*s1 || *s2) && n != 0)
	{
		if (!(*s1 == *s2))
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
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
// 	test1s1 = NULL;
// 	char *test1s2;
// 	test1s2 = "hello";
// 	int test1;
// 	test1 = 0;
// 	printf("origin\t%d\n", strncmp(test1s1, test1s2, test1));
// 	printf("ft\t%d\n", ft_strncmp(test1s1, test1s2, test1));
// }
