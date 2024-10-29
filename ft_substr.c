/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:35:47 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/29 00:01:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;

    i = 0;
    char *buff;

    if (start < i || len < i || (size_t)start + len > ft_strlen(s))
        return NULL;
    
    buff = malloc(len + 1);
    if (!buff)
        return (NULL);
    ft_strlcpy(buff, s + start, len + 1);
    return (buff);
    
    
}

// int     main(void)
// {
//     const char *s = "hallo ich bin othmane ";
//     char *p;

//     p = ft_substr(s, 6, 16);
//     printf("%s\n", p);
//     return (0);
// }