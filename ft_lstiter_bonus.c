/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:52:06 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 18:48:15 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void change_content(void *content)
// {
//     char *con = (char *)content;
//     ft_memcpy(con, "0x", 2);
    
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *node;

    node = lst;
    if (!node || !f)
        return ;
    while(node)
    {
        f(node->content);
        node = node->next;
    }
}

// int main(void)
// {
//     void (*add) (void *content);

//     t_list *node1, *node2, *node3, *node4, *header, *last;
    
//     // create nodes;
//     node1 = ft_lstnew(strdup("youssef"));
//     node2 = ft_lstnew(strdup("houdaifa"));
//     node3 = ft_lstnew(strdup("hassan"));
//     node4 = ft_lstnew(strdup("aymane"));

//     // link nodes;

//     header = node1;
//     last = node1;
    
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     while(last)
//     {
//         printf("%s\n", last->content);
//         last = last->next;
//     }
    
//     add = change_content;
//     ft_lstiter(header, add);
//     last = node1;
//     while(last)
//     {
//         printf("%s\n", last->content);
//         last = last->next;
//     }
    
    
    
// }