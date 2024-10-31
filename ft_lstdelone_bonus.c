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

// void ft_del_node(void *content)
// {

//     if (content == NULL)
//         return ;

//     free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
//     t_list *node;

//     node = ft_lstnew(ft_strdup("othamne zarwal"));

//     printf("%s\n", (char *)node->content);

//     void (*del) (void *);

//     del = ft_del_node;

//     ft_lstdelone(node , del);
//     printf("%s\n", (char *)node->content);

// }