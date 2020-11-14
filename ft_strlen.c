/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:46:54 by namerei           #+#    #+#             */
/*   Updated: 2020/11/07 14:58:19 by namerei          ###   ########.fr       */
/*                                                             k              */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned long  len;

	len = 0;
	while (s[len])
		len++;
	return ((size_t) len);
}

// int		main(void)
// {
// 	printf("myy  %lu\n", ft_strlen("iasd"));
// 	printf("orig %lu\n", strlen("asdf"));
// 	return (0);
// }
