#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len_list;

    len_list = 0;
    t_list *tmp;
    tmp = lst;
    while (tmp != NULL)
    {
        len_list++;
        tmp = tmp -> next; // perehodim k sleduyushemu elementu
    }
    return (len_list);
}