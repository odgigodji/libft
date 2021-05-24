/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:32:01 by namerei           #+#    #+#             */
/*   Updated: 2021/05/23 21:32:11 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    t_list *list;

    list = *lst; //list is lst now we can work with
    if(!list)
        return ;
    int i = 0;
    while(i < 4)
    {
        printf("%s\n", (char *) list->content);
        tmp = list->next;
        ft_lstdelone(list, del);
        list = tmp;
        i++;
    }
    ft_lstdelone(tmp, del);
}
