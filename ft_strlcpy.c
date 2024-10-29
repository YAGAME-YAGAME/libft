/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:25:17 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/28 19:50:50 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}

// int main(void)
// {
//     char src[] = "Hello";
//     char dst[5];

//     printf("%zu\n",  ft_strlcpy(dst, src, 0)); // Outputs: Hello, Wor
//     return (0);
// }