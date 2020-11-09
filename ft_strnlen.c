/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:09:05 by namerei           #+#    #+#             */
/*   Updated: 2020/11/06 22:33:01 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strnlen(const char *s, size_t maxlen)
{
	size_t len;

	len = 0;
	while (len < maxlen) 
	{
		if (!s[len])
			break;
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char z[] = "01234567890";
	printf("my:%zu\n", ft_strnlen(z,9));
	printf("orig %zu\n", strnlen(z,9));
}*/
