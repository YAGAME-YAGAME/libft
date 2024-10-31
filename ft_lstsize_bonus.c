/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:09:58 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/28 22:34:50 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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
//     ft_lstadd_front(&last, other);
//     node = last;
//     i = 0;
//     while(last)
//     {
//         printf("%s\n", last->content);
//         last = last->next;
//         i++;
//     }
//     printf("%d\n",ft_lstsize(node));

// }