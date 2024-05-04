/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:15 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/30 14:17:42 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_split_arraycount(char const *s,char c)
{
    size_t count;
    count = 0;
    char * trimed_s; 
    trimed_s = ft_strtrim(s,c);
    while (*trimed_s)
    {
        while(*trimed_s && *trimed_s != c)
            trimed_s++;
        if(*trimed_s)
            count++;
        while(*trimed_s && *trimed_s == c)
            trimed_s++;
    }
    return count;
}


char	**ft_split(char const *s, char c)
{
    char ** res ;
    size_t splited_arraysize;
    char * trimed_s; 

    trimed_s = ft_strtrim(s,c);
    splited_arraysize = ft_split_arraysize(s,c);
    res = ft_calloc(splited_arraysize,sizeof(char));

    while(res && splited_arraysize--)
    {
        while(trimed_s && trimed_s != c)
            trimed_s++;
        if(trimed_s)
            res = ft_strldup(trimed_s,c);
            

    }

    return res;
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "aaaaaaaaaAAaaBBaaCCaa";
	char	set[] = "a";

	printf("ft_strtrim\t%s\n", ft_strtrim(s1, set));
	return (0);
}