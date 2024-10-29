/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:26:07 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/27 13:20:48 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_case(unsigned int i, char *c)
// {   
//     if (i % 2 == 0)
// 	{
// 		c[i] = toupper(c[i]);
// 	}
// 	else
// 	{
// 		c[i] = tolower(c[i]);
// 	}
// }

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    
    i = 0;
    if (!s || !f)
        return ;
    while(s[i])
    {
        f(i, &s[i]);
        s++;
    }
    
}
// int main(void)
// {
//     char *s = "othmane zarwal";
    
//     void (*func) (unsigned int , char*);
//     func = ft_case;
//     ft_striteri(s, func);
    
//     printf("%s\n", s);
// }