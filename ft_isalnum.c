/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:54:06 by namerei           #+#    #+#             */
/*   Updated: 2020/11/03 14:36:59 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main()
{
	printf("%d", ft_isalnum('A'));
}
