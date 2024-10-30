/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:09 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 17:58:01 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	long	nbr;

	nbr = n;
	printf("%ld\n", nbr);
	c = count_size(n);
	str = malloc(c + 1);
	if (!str)
		return (NULL);
	str[c] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	while (c--)
	{
		str[c] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main(void)
// {
//     int n = 2147483647;
//     char *str = ft_itoa(n);
//     printf("%s\n", str);
// }