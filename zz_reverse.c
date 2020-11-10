/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:34:33 by namerei           #+#    #+#             */
/*   Updated: 2020/11/03 22:44:00 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_reverse1(char s[])
{
	int c, j, i, len;
	
	i = 0;
	len = strlen(s);
	char z[len];
	printf ("%d", len);
	while (i < strlen(s) - 1)
	{
		c = s[i];
		//printf("c:%c\n",c);
		s[i] = z[len];
		//printf("s:%c\n",s[i]);
		z[len] = c;
		//printf("slen:%c\n",s[len]);
		i++;
		len--;
	} 
	z[i] = '\0'; 
	printf("%s",z);
	return (s);
}
		
char *ft_reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	//s[i] = '\0';
	return (s);
}

int main()
{
	char z[20] = "helllllo";
	//ft_reverse(z);
	//printf("%s",ft_reverse(z));
	printf("%s",ft_reverse1(z));
}
