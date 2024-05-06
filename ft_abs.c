/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:46:16 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/06 13:46:39 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abs(int n)
{
	if (n <= 0)
		return (~(unsigned int)n + 1u);
	return ((unsigned int)n);
}