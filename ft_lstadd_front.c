/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:09 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/10 21:49:37 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list0;
// 	t_list	*head;

// 	list1 = ft_lstnew("list1 content\n");
// 	list0 = ft_lstnew("list0 content\n");
// 	head = list1;
// 	printf("head before \t %s", (char *)head->content);
// 	ft_lstadd_front(&head, list0);
// 	printf("head after \t %s", (char *)head->content);
// 	return (0);
// }
