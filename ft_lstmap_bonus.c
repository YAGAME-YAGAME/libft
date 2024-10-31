/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:06:04 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/31 11:21:59 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *edit(void *content)
// {
//     int i = 0;
//     char *s = content;
//     while(s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//            s[i] -=  32;
//         }
//          i++;
//     }
//     return (content);
// }


// void    put_list(t_list *node)
// {
//     if (!node)
//         return ;
//     while (node)
//     {
//         printf("%s\n", (char *)node->content);
//         node = node->next;
//     }
// }

// void del_node(void *content)
// {
//     free(content);
// }


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlist;
    t_list *node;
    void *s;
    
    newlist = (NULL);
    
    if (!lst || !f || !del)
        return (NULL);
    
    while(lst)
    {
        s = f(lst->content);
        node = ft_lstnew(s);
        if (!node)
        {
            del(node->content);
            ft_lstclear(&newlist, del);
               return (NULL);
        }
        ft_lstadd_back(&newlist, node);
        lst = lst->next;
    }
    return (newlist);
}


// int main(void)
// {
//     t_list *header, *lst;
//     t_list *new_list;
//     t_list *node1, *node2, *node3, *node4;

//     void *(*f) (void *);
//     void  (*del) (void *);

//     f = edit;
//     del = del_node;
    

//     node1 = ft_lstnew(ft_strdup("othmane"));
//     header = node1;

//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("youssef")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("houdaifa")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("hassan")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("otmane")));
//     ft_lstadd_back(&header, ft_lstnew(ft_strdup("mouad")));

//     put_list(header);
//     printf("\n============================================\n\n");
//     new_list = ft_lstmap(header, f, del);

//     put_list(new_list);
    
//     put_list(header);
// }
