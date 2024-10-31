/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:35:47 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/31 09:57:30 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buff;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	buff = malloc(len + 1);
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, s + start, len + 1);
	return (buff);
}

// int     main(void)
// {
//     const char *s = "";
//     char *p;

//     p = ft_substr(s, 0, 0);
//     printf("%s\n", p);
//     return (0);
// }