/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:24 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 21:52:16 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char* s1, const char* s2, size_t n )
{
    size_t i;

    i = 0;
    while (i < n  && (s1[i] || s2[i]))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}

// int main(void)
// {
//     char s1[] = "test\200";
//     char s2[] = "test\0";

//     printf("%d\n", ft_strncmp(s1, s2, 6));
//     return (0);
// }