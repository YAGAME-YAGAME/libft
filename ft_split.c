/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:13:57 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/31 14:48:25 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char sep)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != sep && str[i])
			i++;
		c++;
	}
	return (c);
}

static char	**alloc_free(char **bf, int index)
{
	while (index > 0)
	{
		free(bf[index]);
		index--;
	}
	free(bf);
	return (NULL);
}

static void	ft_alloc(char **buff, char *s, int wc, char c)
{
	int	j;
	int	i;
	int	start;
	int	k;

	i = 0;
	start = 0;
	j = 0;
	while (j < wc)
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		k = 0;
		buff[j] = malloc((i - start) + 1);
		if (!buff)
			alloc_free(buff, j);
		while (start < i)
			buff[j][k++] = s[start++];
		buff[j][k] = '\0';
		j++;
	}
	buff[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**buff;

	wc = count_word(s, c);
	buff = malloc((wc + 1) * sizeof(char *));
	if (!buff)
		return (NULL);
	ft_alloc(buff, (char *)s, wc, c);
	return (buff);
}

// int    main(void)
// {
//     char *s = "otmane hafid karim yassine abderrahim adil amina";
//     char c = ' ';
//     char **res;

//     res = ft_split(s, c);

//     int i = 0;
//     while(i < count_word(s, c))
//     {
//         printf("%s\n", res[i]);
//         i++;
//     }
//     return (0);
// }
