/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:41:51 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/23 13:44:37 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1++)
	{
		while (*s2++)
		{
			if (ft_strncmp(s1, s2, n))
			{
				return ((int)s1);
			}
			else
				return ((int)NULL);
		}
	}
	return ((int)NULL);
}