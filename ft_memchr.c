/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:35:57 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/27 15:40:13 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n--)
    {
        if (*p == (unsigned char)c)
            return (void *)p;
        p++;
    }
    return (NULL);
}

// int main(void)
// {
//     char str[] = "Hello, World!";
//     char c = 'o';
//     char *ptr = ft_memchr(str, c, strlen(str));

//     printf("%p\n", ptr);
//     printf("%p\n", str);
//     return 0;
// }