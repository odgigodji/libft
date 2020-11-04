/* ************************************************************************** */
/*                                                                            */
/*                                                         :::       :::::::: */
/*   ft_bzero.c                                           :+:       :+: :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:46:13 by namerei           #+#    #+#             */
/*   Updated: 2020/11/03 14:36:42 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = '\0';
}

/*int		main(void)
{
	int i = 5;
	char a[20] = "h99loooo";
//	bzero(a, 3);
//	printf("%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4]);
	ft_bzero(a, 3);
	printf("%c%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4], a[5]);
	return (0);

}*/
