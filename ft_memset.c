/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:42:51 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/28 23:38:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        ((unsigned char *)str)[i] = (unsigned char)c;
        i++;
    }
    return (str);
}