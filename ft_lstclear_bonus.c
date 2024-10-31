/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:00 by otzarwal          #+#    #+#             */
/*   Updated: 2024/10/31 13:00:01 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void ft_del_node(void *content)
// {

//     if (content == NULL)
//         return ;

//     free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

// int main(void)
// {
//     t_list *node, *header , *last_node, *sw;
//     int i = 0;

//     char name[5][20] = {"othmane" , "youssef", "aymane", "houdaifa",
//	"abderafia"};

//     header = NULL;

//     // node = ft_lstnew(ft_strdup(name[0]));
//     while(i < 5)
//     {
//         if (header == NULL)
//         {
//             node = ft_lstnew(ft_strdup(name[i]));
//             header = node;
//         }
//         else
//         {
//             ft_lstadd_back(&header, ft_lstnew(ft_strdup(name[i])));
//         }
//         i++;
//     }

//     sw = header;
//     i = 0;
//     while(i < 5)
//     {
//         printf("%s\n", sw->content);
//         sw = sw->next;
//         i++;
//     }

//     void (*del) (void *);

//     del = ft_del_node;

//     ft_lstclear(&header, del);
//     sw = header->next;
//     printf("%p\n", sw);
// }