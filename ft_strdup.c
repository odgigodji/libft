/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:07:46 by namerei           #+#    #+#             */
/*   Updated: 2020/11/04 18:07:10 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strdup(const char *s1)
{
	char *res;
	size_t i;

	i = 0;
	res = (char *)malloc(ft_strlen(s1) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}

int 	main(void)
{
	char *z = ft_strdup("gelllllloo");
	printf("%s", z);
	//printf("\217");
	return (0);
}
