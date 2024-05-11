/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:25 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 15:11:03 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		num;
// 	char	*str;
// 	t_list	*num_nord;
// 	t_list	*str_nord;

// 	num = 42;
// 	str = "12345";
// 	num_nord = ft_lstnew(&num);
// 	printf("1 \t %d \n", *(int *)num_nord->content);
// 	str_nord = ft_lstnew(str);
// 	printf("2 \t %s \n", (char *)str_nord->content);
// }
