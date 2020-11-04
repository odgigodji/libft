/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:26:38 by namerei           #+#    #+#             */
/*   Updated: 2020/11/04 00:14:04 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while (*s)
   	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')	
		return ((char *)s);
	return (0);
	}

int main (void)
{    
   // Массив со строкой для поиска
   char src [11]="0123456789";
   // Код искомого символа
   int ch = '6';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
  
   // Ищем символ '6’
   ach = ft_strchr (src,ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %ld\n",ach - src + 1);
	//----check anton
	const char *s = "hellllrooo";
	char c = 'r';	
	char *my = ft_strchr(s, c);
	char *std = strchr(s, c);
	printf("my:%s\n", my);
	printf("orig:%s\n", std);
   return 0;
}
