/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:16 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 12:11:05 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abs(int n)
{
	if (n <= 0)
		return (~(unsigned int)n + 1u);
	return ((unsigned int)n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_abs \t INT_MIN \t %u \n", ft_abs(INT_MIN));
// 	printf("ft_abs \t INT_MAX \t %u \n", ft_abs(INT_MAX));
// 	return (0);
// }