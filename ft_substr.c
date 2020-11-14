/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:30:08 by namerei           #+#    #+#             */
/*   Updated: 2020/11/10 18:43:10 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	char *res = (char *)malloc(len + 1);
	if (!res || !s)
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		res[i++] = s[start++];
		// start++;
		// i++;
	}
	res[i] = '\0';
	return (res);
}

// int		main(void)
// {
// 	char x[] = "01234567890123456789";
// 	char *z = ft_substr(x,10,5);
// 	printf("%s", z);	
// }
