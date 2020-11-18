/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:01:25 by namerei           #+#    #+#             */
/*   Updated: 2020/11/09 16:42:28 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	size_t	i;
	size_t	lit_len;

	i = 0;
	big = (char *)haystack;
	lit_len = ft_strlen(needle);
	while (big[i] && i < len)
	{
		if (!ft_strncmp(&big[i], needle, lit_len) && i + lit_len <= len)
			return (&big[i]);
		i++;
	}
	return ((lit_len == 0 && len == 0) ? big : 0);
}
