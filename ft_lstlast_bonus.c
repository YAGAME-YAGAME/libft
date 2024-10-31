/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:39:42 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/30 19:09:44 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {

//     char all[4][20] = {"othamne", "zarwal", "karim", "farid"};
//     char *s = "houdaifa";

//     int i = 1;
//     t_list *node, *new_node, *other;
//     t_list *first, *last;

//     node = ft_lstnew(all[0]);
//     last = node;
//     while(i < 4)
//     {
//         last->next = ft_lstnew(all[i]);
//         last = last->next;
//         i++;
//     }

//     new_node = ft_lstnew(s);
//     other = ft_lstnew("omar");
//     last = node;
//     ft_lstadd_front(&last, new_node);

//     // printf("%d\n",ft_lstsize(node));
//     // while(last)
//     // {
//     //     printf("%s\n", (char *)last->content);
//     //     last = last->next;
//     // }

//     t_list *ls =  ft_lstlast(last);
//     printf("%s\n", (char *)ls->content);

// }