// #include "libft.h"

// void ft_lstclear(t_list **lst, void (*del)(void *))
// {
//     t_list *tmp;

//     if (*lst == NULL)
//         return ;
//     while (*lst != NULL)
//     {
//         tmp = *lst;
//         *lst = *lst -> next;
//         del(tmp -> content);//razimenovanie i udalenie
//         free(tmp);
//     }
// }