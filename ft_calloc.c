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

int main(void)
{
	char *d = (char*)ft_calloc(4, 1);
	int *p	= (int*) ft_calloc(21, sizeof(int));
	//char *d;
	//d[1] = 'h';
	d[2] = 'Z';
	//d[10] = 'f';
	//d[5] = 'h';
	p[0] = 4;
	p[1] = 5;
	p[2] = 7;
	//free(p);
	//d = (char *) calloc(5, sizeof(char *));
	printf("%d%d% d% d%d%d   %d", d[0], d[1], d[2], d[3], d[4], d[5], d[26]);
	//printf("%d%d%d%d%d", p[0], p[1], p[2], p[3], p[21]);
	return (0);
}
