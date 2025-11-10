
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list	*head;

	head = lst;
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// ---------- Funciones auxiliares ----------
t_list *create_node(int data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node) return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

// ---------- Función de comparación ----------
int ascending(int a, int b)
{
    return (a <= b);
}

// ---------- Declaración de tu función ----------
t_list *sort_list(t_list* lst, int (*cmp)(int, int));

int main(void)
{
    // Crear lista: 4 -> 2 -> 5 -> 3 -> 1
    t_list *n1 = create_node(4);
    t_list *n2 = create_node(2);
    t_list *n3 = create_node(5);
    t_list *n4 = create_node(3);
    t_list *n5 = create_node(1);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    t_list *lst = n1;

    printf("Lista antes de ordenar:\n");
    print_list(lst);

    lst = sort_list(lst, ascending);

    printf("\nLista después de ordenar:\n");
    print_list(lst);

    // Liberar memoria
    t_list *tmp;
    while (lst)
    {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }

    return 0;
}
*/
