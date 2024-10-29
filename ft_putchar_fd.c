/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:11:44 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/27 17:28:04 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    if(!c || fd < 0)
        return ;
    write(fd, &c, 1);  
}
// int main(void)
// {
//     int ft = open("example.txt", O_WRONLY | O_CREAT);
//     ft_putchar_fd('h', ft);
//     printf("%d\n", ft);
    
//     close(ft);
// }