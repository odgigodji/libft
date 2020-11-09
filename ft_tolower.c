/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:37:57 by namerei           #+#    #+#             */
/*   Updated: 2020/11/01 16:50:23 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return ((unsigned char)c + 'a' - 'A');
	else
		return ((unsigned char)c);
}

int main()
{
	int i = 0;
	char z[20] = "hELLo WoRld";
	while (z[i])
	{
		printf("%c",ft_tolower(z[i]));
		i++;
	}
	return (0);
}
