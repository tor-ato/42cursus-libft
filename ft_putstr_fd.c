/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:12 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/07 14:04:14 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s++, fd);
	}
	return ;
}

// #include <stdio.h>

// int main(void)
// {
//     printf("ft_putstr_fd start\n\n");
//     ft_putstr_fd("12345",1);
//     printf("\n\nend\n");
//     return (0);
// }