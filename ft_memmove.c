/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:20:46 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/29 20:48:10 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t	i;
    char *p;

    p = dst;
   
    i = len;
    if (!dst && !src)
        return (NULL);
    if(dst > src)
    {
        while(i-- > 0)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        }
    }
    else
        ft_memcpy(dst, src, i);
    return ((void *)p);
    
}

// int main(void)
// {
//     {
// 	char	src[11] = "Youssefhey";

// 	ft_memmove(src, src, 6);
//     // memmove(src, src, 6);
//     // printf("%s", src);
//     // printf("\n");
// 	//memcpy(src + 2, src, 5);
// 	//printf("%s", src);
// }
// }
