#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void del(void *content)
{
//    printf("content = %p\n", content);
//    printf("dell call 0---------");
//    printf("contetnt |%s|\n", (char *)content);
    free(content);
    content = NULL;
//    printf("|%s|\n\n", (char *)content);
}

int main()
{
	t_list *lst;
	t_list *src1;
	t_list *src2;
	t_list *src3;
	t_list **her;

	lst = ft_lstnew("first_line");

	char *string[] = {"third_line", "fourth_line", "fifth_lien", NULL};
	src1 = ft_lstnew("second_line");
	src2 = ft_lstnew("third_line");
    src3 = ft_lstnew("fourt_line");

    ft_lstadd_back(&lst, src1);
    ft_lstadd_back(&lst, src2);
    ft_lstadd_back(&lst, src3);

//    ft_lstdelone(lst->next->next, del); // delete content from one list
    ft_lstclear(&lst, del);

    int j = 0;
    printf("\n\n----------------------------start---------------------------------\n");
//    printf("lst size is %d\n", ft_lstsize(lst));
//printf("sdf");
    while(1) {
        if (lst->content)
            printf("content is |%s|", (char *) lst->content);
        printf("%d elem is addres is [%p]\n", j, lst->content);
        if (!lst->next)
            break;
        lst = lst->next;
        j++;
    }
	return 0;
}
