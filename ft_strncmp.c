/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:24 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 17:53:45 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char* s1, const char* s2, size_t n )
{
    size_t i;

    if (!s1 || !s2)
        return (0);
    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i]!= s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "Hello";

//     printf("%d\n", ft_strncmp(s1, s2, 5));
//     return (0);
// }