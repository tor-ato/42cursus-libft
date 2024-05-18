/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:29 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 19:15:50 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;
// 	t_list	*head;

// 	list1 = ft_lstnew("1\n");
// 	list2 = ft_lstnew("2\n");
// 	list3 = ft_lstnew("3\n");
// 	head = list3;
// 	printf("head \t %s", (char *)head->content);
// 	ft_lstadd_front(&head, list2);
// 	printf("head \t %s", (char *)head->content);
// 	ft_lstadd_front(&head, list1);
// 	printf("head \t %s", (char *)head->content);
// 	printf("ft_lstsize \t %d", ft_lstsize(head));
// 	return (0);
// }
