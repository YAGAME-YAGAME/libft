/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:40:59 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 20:49:39 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i] && (len - i) >= ft_strlen(needle))
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *str = "lorem ipsum dolor sit amet";
// 	const char *to = "sit";
// 	printf("%s\n", ft_strnstr(str, to, 0));
// 	printf("%s\n", strnstr(str, to, 0));
// }
