/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:52:11 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/12 19:33:06 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	del_content(void *content)
// {
// 	free(content);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst0;
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	char	*s0;
// 	char	*s1;
// 	char	*s2;
// 	t_list	*head;

// 	s0 = malloc(sizeof(char) * 3);
// 	s1 = malloc(sizeof(char) * 3);
// 	s2 = malloc(sizeof(char) * 3);
// 	lst0 = ft_lstnew(s0);
// 	lst1 = ft_lstnew(s1);
// 	lst2 = ft_lstnew(s2);
// 	head = lst0;
// 	ft_lstadd_back(&head, lst1);
// 	ft_lstadd_back(&head, lst2);
// 	printf("ft_lsts \t %d \t \n", ft_lstsize(head));
// 	ft_lstclear(&head, del_content);
// 	printf("ft_lsts \t %d \t \n", ft_lstsize(head));
// 	return (0);
// }
