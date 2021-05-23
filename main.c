#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"








void del(void *content)
{
    printf("content = %p\n", content);
    printf("dell call 0---------");
    printf("contetnt |%s|\n", (char *)content);
    free(content);
    content = NULL;
    printf("|%s|\n\n", (char *)content);
}

int main()
{
	t_list *lst;
	t_list *src1;
	t_list *src2;
	t_list *src3;

	char *strings[5] = {"old line", "last_line", "aa2", "aa3", NULL};
	lst = ft_lstnew(strings[0]);

	src1 = ft_lstnew("new line");
	src2 = ft_lstnew(strings[1]);
    src3 = ft_lstnew(strings[2]);

//    free(src3->content);
//    src3->content = NULL;


    ft_lstadd_front(&lst, src1);
    ft_lstadd_back(&lst, src2);
    ft_lstadd_back(&lst, src3);

    ft_lstdelone(lst, del);

    printf("lst size is %d\n", ft_lstsize(lst));
//    t_list *testLast = ft_lstlast(lst);
//    printf("test lstlast = %s\n", (char *)testLast->content);

    t_list *l = ft_lstnew(((void *)0));

    if (!l->content)
        exit(TEST_SUCCESS);
    exit(TEST_FAILED);


    while(1) {
        printf("%s\n", (char *) lst->content);
        if (!lst->next)
            break;
        lst = lst->next;
    }
	return 0;
}
