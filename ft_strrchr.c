/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:23:06 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 17:50:55 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    if (!str)
        return (NULL);
    char *ptr = (char *)str;

    while (*ptr!= '\0')
        ptr++;
    while (ptr >= str && *ptr!= (char)c)
        ptr--;
    if (*ptr == (char)c)
        return (ptr);
    return (NULL);
}

// int main(void)
// {
//     char str[] = "Hello, World!";
//     char c = 'o';
//     char *ptr = strrchr(str, c);

//     printf("%p\n", ptr);
//     printf("%p\n", str);

//     return (0);
// }