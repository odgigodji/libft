// #include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
// {
//     t_list *tmp;

//     if (lst != NULL && f != NULL)
//     {
//         while (lst != NULL)
//         {
//             if (!(tmp = ft_lstnew(f(lst -> content))))
//             {
//                 ft_lstclear(tmp, del);                
//             }
//             ft_lstadd_back(tmp);
//             lst = lst -> next;
//         }
//     }
    
// }
