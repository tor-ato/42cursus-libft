/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:21 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/06 19:53:15 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}

// void	ft_shiftchar(unsigned int i, char *c)
// {
// 	*c += i;
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char c;
// 	c = '1';
// 	unsigned int i;
// 	i = 1;
// 	ft_shiftchar(i, &c);

// 	printf("ft_shiftchar \t %c \n", c);

// 	char s[] = "11111";
// 	ft_striteri(s, ft_shiftchar);

// 	printf("ft_strmapi \t %s \n", s);
// 	return (0);
// }