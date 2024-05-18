/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:18 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/12 15:24:20 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;
// 	t_list	*head;
// 	int		count;

// 	list1 = ft_lstnew("list1");
// 	list2 = ft_lstnew("list2");
// 	list3 = ft_lstnew("list3");
// 	head = list3;
// 	ft_lstadd_front(&head, list2);
// 	ft_lstadd_front(&head, list1);
// 	count = ft_lstsize(head);
// 	printf("count \t %d \t \n", count);
// 	printf("ft_lstlast ¥ \t %p \t \n", ft_lstlast(list1));
// 	printf("list3 ¥ \t %p \t \n", list3);
// 	return (0);
// }
