/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:06:04 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/29 21:26:06 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  
}

int main(void)
{
    t_list *header, *lst;
    t_list *node1, *node2, *node3, *node4;

    void *(*f) (void *);
    void  (*del) (void *);
    

    node1 = ft_lstnew(ft_strdup("othmane"));
    header = node1;

    ft_lstadd_back(&header, ft_lstnew(ft_strdup("youssef")));
    ft_lstadd_back(&header, ft_lstnew(ft_strdup("houdaifa")));
    ft_lstadd_back(&header, ft_lstnew(ft_strdup("hassan")));
    ft_lstadd_back(&header, ft_lstnew(ft_strdup("otmane")));
    ft_lstadd_back(&header, ft_lstnew(ft_strdup("mouad")));

    lst = header;
    while (lst)
    {
        printf("%s\n", lst->content);
        lst = lst->next;
    }

    ft_lstmap(header, f, del);
    
}
