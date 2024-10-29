/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:52:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 00:52:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{

}

// int main()
// {
    
//     char all[4][20] = {"othamne", "zarwal", "karim", "farid"};
//     char *s = "houdaifa";

    
//     int i = 1;
//     t_list *node, *new_node;
//     t_list  *last;

//     node = ft_lstnew(all[0]);
//     last = node;
//     while(i < 4)
//     {
//         last->next = ft_lstnew(all[i]);
//         last = last->next;
//         i++;
//     }

//     new_node = ft_lstnew(s);
//     last = node;
//     ft_lstadd_front(&last, new_node);
//     i = 0;
//     // last = node;
//     while(last)
//     {
//         printf("%s\n", last->content);
//         last = last->next;   
//     }
//     //printf("%s\n", last->content);

// }