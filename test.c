#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(void)
{
    //ATOI
	int i = 0;
	char c;
	char z[20];
	char x[20] = "\n\t\v\r\f +9";
	printf("my:  %d\n",	ft_atoi(x));	
	printf("orig:%d\n",	atoi(x));	

    //BZERO
    int i = 5;
	char a[20] = "h99loooo";
//	bzero(a, 3);
//	printf("%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4]);
	ft_bzero(a, 3);
	printf("%c%c%c%c%c%c", a[0], a[1], a[2], a[3], a[4], a[5]);

    //CALLOC
    char *d = (char*)ft_calloc(4, 1);
	int *p	= (int*) ft_calloc(21, sizeof(int));
	//char *d;
	//d[1] = 'h';
	d[2] = 'Z';
	//d[10] = 'f';
	//d[5] = 'h';
	p[0] = 4;
	p[1] = 5;
	p[2] = 7;
	//free(p);
	//d = (char *) calloc(5, sizeof(char *));
	printf("%d%d% d% d%d%d   %d", d[0], d[1], d[2], d[3], d[4], d[5], d[26]);
	//printf("%d%d%d%d%d", p[0], p[1], p[2], p[3], p[21]);

    
}