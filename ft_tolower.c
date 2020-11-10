/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:37:57 by namerei           #+#    #+#             */
/*   Updated: 2020/11/09 22:55:31 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{

	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int main(void) 
// {
// 	int i = -100;
// 	while (i < 530)
// 	{
// 		if (ft_tolower(i) != tolower(i))
// 		{
// 			printf("no%d",i);
// 			return 0;
// 		}
// 		i++;
// 	}
// 	printf("ok!");
// 	return 0;
// }

// int main()
// {
// 	int i = 0;
// 	char z[20] = "hELLo WoRld";
// 	while (z[i])
// 	{
// 		printf("%c",ft_tolower(z[i]));
// 		i++;
// 	}
// 	return (0);
// }
