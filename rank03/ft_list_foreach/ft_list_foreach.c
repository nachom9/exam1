
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{

	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

// ---------- Función auxiliar para crear nodos ----------
t_list *create_node(void *data)
{
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main(void)
{
    // Crear lista: "uno" -> "dos" -> "tres" -> NULL
    t_list *n1 = create_node("uno");
    t_list *n2 = create_node("dos");
    t_list *n3 = create_node("tres");

    n1->next = n2;
    n2->next = n3;

    printf("Elementos de la lista:\n");
    ft_list_foreach(n1, &print_data);

    // Liberar memoria
    free(n3);
    free(n2);
    free(n1);

    return 0;
}*/
