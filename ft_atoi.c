/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:41:28 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/01 14:38:30 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip_spaces(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

int	ft_atoi(const char *str)
{
	long	res;
	int		q;

	res = 0;
	q = 1;
	while (ft_skip_spaces(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			q *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res *= q);
}

// int main(void)
// {
//     char str[] = "   -2147483650";
//     printf("%d\n", ft_atoi(str));
//     printf("%d\n", atoi(str));
//     return (0);
// }
