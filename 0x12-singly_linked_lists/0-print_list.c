#include "lists.h"

/**
    * print_list - prints all the elements of a list_t list
    * @h:
    *
    * Return: return number of nodes (n)
    */
 size_t print_list(const list_t *h){
    size_t len;
    len = 0;
    /*ptr = NULL;*/
    /*ptr = h;*/
    while(h != NULL) {
        if(h->str == NULL)
            printf("[0] (nil)\n");
        else
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        len++;
    }
    return len;
}
