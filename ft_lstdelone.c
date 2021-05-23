/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:18:52 by namerei           #+#    #+#             */
/*   Updated: 2021/05/23 21:19:02 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return;
    del(lst->content);
    free(lst);
//    lst->content = NULL;
//    printf("%p\n", lst->next);
//    free(lst);
//    free(lst->next);
//    lst->next = NULL;
//    printf("%p\n", lst->next);
//    printf("%s\n", lst->next->content);
}
