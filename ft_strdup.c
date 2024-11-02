/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:38:16 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/02 09:02:12 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*buff;
	size_t	size;

	size = ft_strlen(s1);
	buff = malloc(size + 1);
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, s1, size + 1);
	return (buff);
}

// int main(void)
// {
// 	write(1, ft_strdup("hello"), 5);
//     char *s = NULL;
//     char *res;
//     res = ft_strdup(s);
//     printf("%s\n", res);
// }
