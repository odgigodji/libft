/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:58:16 by namerei           #+#    #+#             */
/*   Updated: 2021/05/23 19:58:19 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content) // create element of list
{
    t_list *lst;
    if (!(lst = malloc(sizeof(t_list))))
        return NULL;
    if (!content) {
        lst->content = NULL;
        return (lst);
    }
    lst->content = content;
    lst->next = NULL;
    return (lst);
}
