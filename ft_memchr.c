/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:18:51 by namerei           #+#    #+#             */
/*   Updated: 2020/11/04 14:29:56 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i); //equal:s + i
		i++;
	}
	return (NULL);
}

int		main(void)
{
	// Исходный массив
   //unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   //printf ("src old: %s\n",src);

   // Поиск требуемого символа
   //sym = ft_memchr (src, '4', 10);
   //memchr("gelloo", 90, 3);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]= '!';

   // Вывод исходного массива
   //printf ("src new: %s\n",src);
   	int n = 6;
	char a[] = "abcdefgh";
	char b[] = "abcdefgh";
	printf("my:\n\t%s\n", ft_memchr(a, 'd', n));
	printf("orig:\n\t%s\n", memchr(b, 'd', n));
	
   return 0;
}
