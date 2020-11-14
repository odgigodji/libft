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

// #include <stdio.h>
// #include <stdlib.h>
// #include "ft_strlen.c"
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t i;
	
	i =0;
	if (!s1)
		return 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	char *res = (char *)malloc(len + 1);
	if (!res)
		return (res);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		res[i] = *s2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int		main(void)
// {
// 	char *z = "01234";
// 	char *a = "56789";
// 	char *x = ft_strjoin(z, a);
// 	printf("%s\n",x);
// }
