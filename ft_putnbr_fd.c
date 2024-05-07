/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:09 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 14:05:19 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;
	char			str[12];
	int				i;

	m = n;
	i = 12;
	if (n < 0)
		m = ft_abs(n);
	str[--i] = 0;
	while (m)
	{
		str[--i] = '0' + m % 10;
		m /= 10;
	}
	if (n < 0)
		str[--i] = '-';
	if (n == 0)
		str[--i] = '0';
	ft_putstr_fd(&str[i], fd);
	return ;
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_putnbr_fd start\n\n");
// 	ft_putnbr_fd(INT_MIN, 1);
// 	printf("\n\nend\n");
// 	return (0);
// }