/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:06 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/12 17:21:14 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)
{
	if (*head)
		ft_lstlast(*head)->next = new;
	else
		*head = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list0;
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*head;

// 	list0 = ft_lstnew("list0");
// 	list1 = ft_lstnew("list1");
// 	list2 = ft_lstnew("list2");
// 	head = NULL;
// 	ft_lstadd_back(&head, list0);
// 	printf("lstadd_back \t %d \t \n", ft_lstsize(head));
// 	ft_lstadd_back(&head, list1);
// 	printf("lstadd_back \t %d \t \n", ft_lstsize(head));
// 	return (0);
// }
