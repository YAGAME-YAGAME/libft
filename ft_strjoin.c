/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:02:13 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/28 19:53:45 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	int		size;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	buff = malloc(size);
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, s1, ft_strlen(s1) + 1);
	ft_strlcat(buff, s2, size);
	return (buff);
}

// int main(void)
// {
//     char *s1 = "othmane";
//     char *s2 = "hassan";

//     char *res = ft_strjoin((const char *)s1, (const char *)s2);

//     printf("%s\n", res);
//     return (0);
// }