/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:28:27 by namerei           #+#    #+#             */
/*   Updated: 2020/11/04 00:36:49 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"

void *ft_calloc(size_t count, size_t size)
{
	void *res;

	res = malloc(count * size);
	if (res == NULL)
		return (res);
	ft_bzero(res, count * size);
	return (res);
}

