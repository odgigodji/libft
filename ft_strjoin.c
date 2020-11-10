/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:09:20 by namerei           #+#    #+#             */
/*   Updated: 2020/11/10 19:22:09 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len;

	len = ft_strlen(s1) + ft_strlen(s2);
	char *res = (char *)malloc(len + 1);
	while (s1 )
	{
		*res = *s1;
		res++;
		s1++;
	}
	*res = '\0';
	return (res);
}

int		main(void)
{
	char *z = "asdfasdf";
	char *a = "ffffffff";
	char *x = ft_strjoin(z, a);
	printf("%s\n",x);
}
