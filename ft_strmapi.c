/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:55 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 19:33:33 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char ft_upper(unsigned int i, char c)
// {   
//     (void)i;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// static char ft_lower(unsigned int i, char c)
// {   
//     (void)i;
//     if (c >= 'A' && c <= 'Z')
//         return (c + 32);
//     return (c);
// }

// static char ft_case(unsigned int i, char c)
// {   
//     (void)i;
//     if (c % 2 == 0)
//         return (c - 32);
//     return (c);
// }
//  static char ft_roton(unsigned int i, char c)
//  {
//     (void)i;
//     if((c >= 'a' && c < 'z')  || (c >= 'A' && c < 'A'))
//         c += 1;
//     if (c == 'z' || c == 'Z')
//         c -= 26;
//     return (c);
//  }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *buff;
    size_t s_len;
    size_t i;

    i = 0;
    if (!s || !f)
        return (NULL);
    s_len = ft_strlen(s);
    buff = (char *)malloc(s_len + 1);
    if (!buff)
        return (NULL);
    while(i < s_len)
    {
        buff[i] = f(i, s[i]);
        i++;
    }
    buff[i] = '\0';
    return (buff);
}




// int main(void)
// {
//     char const *s = "othmanezarwal";
//     char *res;
//     res = ft_strmapi(s , ft_case);
//     printf("%s", res);
//     int i;
    
//     // char (*kamar) (unsigned int , char);
//     // kamar = ft_upper;
    
//     char (*kamar[4])(unsigned int , char) = {ft_roton, ft_case,ft_lower, ft_upper};
    
//     i = 0;
//     while(i < 4)
//     {
//         res = ft_strmapi(s, kamar[i]);
//         printf("%s\n", res);
//         i++;
//     }
   



    
//     return (0);
// }
