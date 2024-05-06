/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:11:02 by tkitahar          #+#    #+#             */
/*   Updated: 2024/04/30 14:18:02 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_itoa(int n)
// {
//     char * str;
//     unsigned int absed_n;

//     absed_n = ft_abs(n);
//     if(n < 0)
//     {
//         *str = '-';
//         str++;
//     }
//     while (absed_n)
//     {
//         *str = (char) '0'+ ( absed_n % 10);
//         absed_n /= 10;
//         str++;
//     }
//     return ft_strdup(str);

// }



// #include <stdio.h>

// int main(void)
// {  
//     int n = 123;

//     printf("\t%s\n",ft_atoi(n));
//     return 0;
// }