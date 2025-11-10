
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	while (*begin_list && begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
		else
			begin_list = &((*begin_list)->next);
	}
}
/*
#include <stdio.h>
#include <string.h>

// ---------- Función para imprimir la lista ----------
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

// ---------- Función auxiliar para crear nodos ----------
t_list *create_node(void *data)
{
    t_list *new = malloc(sizeof(t_list));
    if (!new)
        return NULL;
    new->data = data;
    new->next = NULL;
    return new;
}

int main(void)
{
    // Crear una lista: "apple" -> "banana" -> "apple" -> "cherry" -> NULL
    t_list *n1 = create_node("apple");
    t_list *n2 = create_node("banana");
    t_list *n3 = create_node("apple");
    t_list *n4 = create_node("cherry");

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    t_list *list = n1;

    printf("Lista antes:\n");
    print_list(list);

    // Eliminar todos los nodos con data == "apple"
    ft_list_remove_if(&list, "apple", (int (*)(void*, void*))strcmp);

    printf("\nLista después de eliminar \"apple\":\n");
    print_list(list);

    // Liberar el resto de la lista
    while (list)
    {
        t_list *tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}*/
