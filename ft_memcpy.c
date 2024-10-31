/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:11:14 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 17:44:34 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// int main(void)
// {
//     {
// 	char	src[11] = "Youssefhey";

// 	ft_memcpy(src, src, 6);
//     // memmove(src, src, 6);
//     // printf("%s", src);
//     // printf("\n");
// 	//memcpy(src + 2, src, 5);
// 	//printf("%s", src);
// }
// }