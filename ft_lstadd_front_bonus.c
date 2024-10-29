/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:35:16 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/28 22:25:21 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!*lst)
        *lst = new;
    else
    {
        new->next = *lst;
        *lst = new;
    }
    // printf("{%s}\n", (*lst)->content);   
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