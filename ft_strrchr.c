/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:27:39 by namerei           #+#    #+#             */
/*   Updated: 2020/11/08 14:55:41 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (s[len - 1])
   	{
		if ((char)s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	if ((char)c == '\0')	
		return ((char *)&s[len]);
	return (0);
	}

int main (void)
{    
//    // Массив со строкой для поиска
//    char src [11]="0123456789";
//    // Код искомого символа
//    int ch = '6';
//    // Указатель на искомую переменную в строке,
//    // по которой осуществляется поиск.
//    char *ach;
  
//    // Ищем символ '6’
//    ach = ft_strchr (src,ch);

//    // Выводим результат на консоль
//    if (ach==NULL)
//       printf ("Символ в строке не найден\n");
//    else
//       printf ("Искомый символ в строке на позиции # %ld\n",ach - src + 1);
// 	//----check anton
	const char *s = "";
	char c = '.';	
	char *my = ft_strrchr(s, c);
	char *std = strrchr(s, c);
	char *std1 = strchr(s, c);
	printf("my:%s\n", my);
	printf("orig:%s\n", std);
	printf("orig ch: %s\n", std1);
   return 0;
}
