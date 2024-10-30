/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:02:00 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 18:15:04 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void *buff;

    // if (size != 0 || count > SIZE_MAX / size)
    //     return (NULL);
    buff = malloc(count * size);
    if (!buff)
        return (NULL);
    ft_bzero(buff, count * size);
    return (buff);
    
}

// int main(void)
// {
//     char *bf;
//     int i;
    
//     i = 0;
//     bf = ft_calloc(10, sizeof(char));
    
//     while ( i < 10)
//     {
//         printf("%d\n", bf[i]);
//         i++;
//     }
//     return (0);
// }