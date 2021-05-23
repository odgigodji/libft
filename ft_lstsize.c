/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:13:31 by namerei           #+#    #+#             */
/*   Updated: 2021/05/23 21:13:48 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int size = 1;

    if (!lst)
        return 0;
    while(lst->next)
    {
        size++;
        lst = lst->next;
    }
    return (size);
}