/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:37:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 00:37:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

// int main()
// {

//     char all[4][20] = {"othamne", "zarwal", "karim", "farid"};
//     char *s = "houdaifa";

//     int i = 1;
//     t_list *node, *last_node;
//     t_list  *last;

//     node = ft_lstnew(all[0]);
//     last = node;
//     while(i < 4)
//     {
//         last->next = ft_lstnew(all[i]);
//         last = last->next;
//         i++;
//     }

//     last_node = ft_lstnew(s);
//     last = node;
//     ft_lstadd_back(&last, last_node);

//     // last = node;
//     while(last)
//     {
//         printf("%s\n", (char *)last->content);
//         last = last->next;
//     }
//     //printf("%s\n", last->content);

// }