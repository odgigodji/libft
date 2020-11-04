#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char		buffer[n];
	unsigned char		*destcpy;
	unsigned char		*source;

	source = (unsigned char *)src;
	destcpy = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destcpy[i] = buffer[i];
		i++;
	}
	return ((unsigned char *)dst);
}

/*void	*ft_memmove1(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d = d + len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return ((unsigned char *)dst);
}*/

void	*ft_memmove1(void *dest, const void *source, size_t count)
{
	if (dest == 0 && source == 0)
		return (0);
	if (dest < source)
		return (ft_memcpy(dest, source, count));
	while (count--)
		((unsigned char*)dest)[count] = ((unsigned char *)source)[count];
	return (dest);
}

int		main(void)
{
	char src[20] = "01234567890";
	char src1[20] = "01234567890";
	printf("src old: %s\n", src);
	memmove (&src[5], &src[3], 3);
	printf ("origin: %s\n", src);
	//ft_memmove1 (&src1[5], &src1[3], 3);
	//printf ("my: %s\n", src);
	ft_memmove1(&src1[5], &src1[3], 3);
	printf ("my1: %s\n", src1);
	return (0);
}
