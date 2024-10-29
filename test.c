
#include "libft.h"



void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}

    // int x = 10;
    // if (x = 5) {
    //     printf("X is 5\n");
    // }
    // return 0;

    // int a = 8;
    // int b = 7;
    // int **p;
	// int *p1;
    // p1 = &a;
    // p = &p1;

	// printf("1::%p\n", p1);
    // printf("%p\n", p);
    // printf("%p\n", *p);

	// **p = 458;
	// printf(" a = %d\n", a);
	// *p = &b;
	// **p = 888;
	// printf(" b = %d\n", *p1);

}


// void	change_case(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 	{
// 		*c = toupper(*c);
// 	}
// 	else
// 	{
// 		*c = tolower(*c);
// 	}
// }