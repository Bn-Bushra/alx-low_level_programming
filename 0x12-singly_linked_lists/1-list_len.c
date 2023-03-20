#include "lists.h"

/**
    * list_len - returns the number of element in a linked list
    * @h: the singly linked list
    * Return: number of element in a list
*/
size_t list_len(const list_t *h){
    size_t len;
    len = 0;

    while(h != NULL){
        len++;
        h = h->next;
    }
    return len;
}
