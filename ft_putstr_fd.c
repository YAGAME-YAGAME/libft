/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:44:01 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/27 17:35:26 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    if (!s || fd < 0)
        return ;
    while(*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}

// int main(void)
// {
//     int fd = open("example.txt", O_WRONLY);
    
//     ft_putstr_fd("kjdkjfkdslfj", fd);
//     close(fd);
// }