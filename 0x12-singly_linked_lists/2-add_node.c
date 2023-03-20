#include "lists.h"

/**
    * add_node - add a node at the beginning of a list
    * @head: first node
    * @str: data
    * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *ptr;
    size_t len;
    ptr = malloc(sizeof(list_t));
    if(ptr == NULL)
        return (NULL);
    ptr->str = strdup(str);
    for (len = 0; str[len]; len++)
    {
        ptr->len = len;
    }
    ptr->next = NULL;

    ptr->next = *head;
    *head = ptr;
    return *head;
}
