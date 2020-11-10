#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(void)
{
	////////////////////////////////FIRST PART

//     //ATOI
// 	int i = 0;
// 	char c;
// 	char z[20];
// 	char x[20] = "\n\t\v\r\f +9";
// 	printf("my:  %d\n",	ft_atoi(x));	
// 	printf("orig:%d\n",	atoi(x));	

//     //BZERO
//     int i = 5;
// 	char a[20] = "h99loooo";
// //	bzero(a, 3);
// //	printf("%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4]);
// 	ft_bzero(a, 3);
// 	printf("%c%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4], a[5]);

//     //CALLOC
//     char *d = (char*)ft_calloc(4, 1);
// 	int *p	= (int*) ft_calloc(21, sizeof(int));
// 	//char *d;
// 	//d[1] = 'h';
// 	d[2] = 'Z';
// 	//d[10] = 'f';
// 	//d[5] = 'h';
// 	p[0] = 4;
// 	p[1] = 5;
// 	p[2] = 7;
// 	//free(p);
// 	//d = (char *) calloc(5, sizeof(char *));
// 	printf("%d%d% d% d%d%d   %d", d[0], d[1], d[2], d[3], d[4], d[5], d[26]);
// 	//printf("%d%d%d%d%d", p[0], p[1], p[2], p[3], p[21]);

// 	//ISASCII
// 	printf("%d", ft_isascii(126));

// 	//ISDIGIT
// 	printf("%d", ft_isdigit('9'));

// 	//ISPRINT
// 	printf("%d", ft_isprint('3'));

// 	//MEMCCPY
// 	char z[30] = "0123456789Zabcdefghjkl";
// 	char x[30] = "0123456789Zabcdefghjkl";
// 	memccpy(&z[2], &z[5], 90, 3*sizeof(char));
// 	//ft_memccpy(&x[2], &x[5], 90, 3* sizeof(char));
// 	printf("orig:%s\n", z);
// 	printf("my:  %s\n", x);
	
// 	//MEMCHR
// 	int n = 6;
// 	char a[] = "abcdefgh";
// 	char b[] = "abcdefgh";
// 	printf("my:\n\t%s\n", ft_memchr(a, 'd', n));
// 	printf("orig:\n\t%s\n", memchr(b, 'd', n));

// 	//MEMCMP
// 	printf("orig:%d\n", memcmp("hella", "hellz", 5));
// 	printf("my:%d\n", ft_memcmp("hella", "hellz", 5));

// 	//MEMCPY
// 	char a[20] = "";
// 	char dest[20] = "";
// 	char aa[20] = "";
// 	char ddest[20] = "";
// 	printf("cpy my:   %s\n", ft_memcpy(a + 1, a + 3, 6));
// 	printf("cpy orig: %s\n", memcpy(aa + 1, aa + 3, 6));
	
// 	//MEMMOVE
// 	char src[20] = "1234567890";	
// 	char src1[20] = "1234567890";	
// 	printf ("src old: %s\n", src);
// 	printf("my%s\n", ft_memmove(src, src + 5, 7));
// 	printf("orig%s\n", memmove(src1, src1 + 5, 7));
	
// 	//MEMSET
// 	char a[20] = "\0\0\0";
// 	printf("orig %s\n", memset(a, 90, 5));
// 	printf("my %s\n", ft_memset(a, 90, 5));
// 	printf("sizeof char =%lu", sizeof(int *));

// 	//STRCHR
// 	const char *s = "hellllrooo";
// 	char c = 'r';	
// 	char *my = ft_strchr(s, c);
// 	char *std = strchr(s, c);
// 	printf("my:%s\n", my);
// 	printf("orig:%s\n", std);

// 	//STRDUP
// 	char *z = ft_strdup("gelllllloo");
// 	printf("%s", z);
// 	//printf("\217");
	
// 	//STRLCAT
// 	int n = 25;
// 	char dst[40] = "0123456789";
// 	char src[20] = "0123456789123456";
// 	char dst1[40]= "0123456789";
// 	char src1[20]= "0123456789123456";

// 	printf("ORG:	   %lu,%s\n", strlcat(dst, src, n), dst);
// 	printf("MY:  %lu,%s\n", ft_strlcat(dst1, src1, n), dst1);

// 	//STRLCPY
// 	int	 n = 2;
// 	char dst[40] = "0123456789";
// 	char src[20] = "a0b1v2d3e4f5";
// 	char dst1[40] = "0123456789";
// 	char src1[20] = "a0b1v2d3e4f5";

// 	char *d = &dst[0];
// 	char *s = &src[0];
	
// 	printf("origlen:%lu, %s\n", strlcpy(dst, "abcdefg", n), dst);
// 	printf("my len:	%lu, %s\n", ft_strlcpy(dst1, "abcdefg", n), dst1);
	
// 	//STRLEN
// 	printf("myy  %lu\n", ft_strlen("iasd"));
// 	printf("orig %lu\n", strlen("asdf"));
	
// 	//STRNCMP
// 	printf("my%d\n", ft_strncmp("gall","gall",8));
// 	printf("orig%d\n", strncmp("gall","gall",8));

// 	//STRNSTR
// 	size_t n = 13;
// 	char haystack[] = "Hi my name is Johni";
// 	char *x = "my name is";

// 	//char *z = strnstr(haystack, "nam", 14);
// 	printf("little is:%s\n", haystack);
// 	printf("orig:  %s\n", strnstr(haystack, x, n));	
// 	//printf("apple: %s\n", ft_strnstr1(haystack, x, n));	
// 	printf("my:    %s\n", ft_strnstr(haystack, x, n));	
	
// 	printf("\nbig is: \"%s\"\nlittle: \"%s\"\nn: %zu\nRESULTS:\norig: %s\nmy \
// 	:  %s\n",haystack, x, n,strnstr(haystack, x ,n), ft_strnstr(haystack, x, n));

// 	//STRRCHR
// 	const char *s = "";
// 	char c = '.';	
// 	char *my = ft_strrchr(s, c);
// 	char *std = strrchr(s, c);
// 	char *std1 = strchr(s, c);
// 	printf("my:%s\n", my);
// 	printf("orig:%s\n", std);
// 	printf("orig ch: %s\n", std1);

// 	//TOLOWER
// 	int i = 0;
// 	char z[20] = "hELLo WoRld";
// 	while (z[i])
// 	{
// 		printf("%c",ft_tolower(z[i]));
// 		i++;
// 	}
// 	return 0;
}
