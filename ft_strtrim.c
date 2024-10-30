/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:22:31 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 19:45:54 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_set(const char c, const char *set)
{
    while(*set)
    {
        if (c == *set)
            return (1);
       set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *buff;
    size_t len;
  
    if (!s1 || !set)
        return (NULL);
    while(*s1 && is_set(*s1, set))
        s1++;
    len = ft_strlen(s1);
    
    while(len && is_set(s1[len - 1], set))
        len--;
    len++;
    buff = (char *)malloc(len + 1);
    if (!buff)
        return (NULL);
    ft_strlcpy(buff, s1, len );
    
    return (buff);
}

// int main(void)
// {
//     char *str = "lorem ipsum dolor sit amet";
//     char *set = "te";
    
//     char *res = ft_strtrim((const char *)str, (const char *)set);
//     printf("%s\n", res);

//     return (0);
// }