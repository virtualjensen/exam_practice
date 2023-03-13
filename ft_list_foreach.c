#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    funky(void *kalb)
{
    int haywan;
    haywan = *(int *)kalb;
    printf("%d\n", haywan);
}
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int main()
{
   t_list   *node;
   t_list   *node2;
   int  *inty;
   int  *inty2;
   
   inty = (int *)malloc(sizeof(int));
   inty2 = (int *)malloc(sizeof(int));
   node = (t_list *)malloc(sizeof(t_list));
   node2 = (t_list *)malloc(sizeof(t_list));
   *inty = 7;
   *inty2 = 69;
   node->data = inty;
   node->next = node2;
   node2->data = inty2;
   ft_list_foreach(node, &funky);
}
