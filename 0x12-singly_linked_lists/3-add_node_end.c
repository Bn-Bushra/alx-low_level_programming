#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list
 * @head: singly linked list.
 * @str: malloc'ed string
 * 
 * Return: the address of the new element or NULL on failure.
*/

list_t *add_node_end(list_t **head, const char *str)
{
 list_t *temp, *ptr;
 size_t len;
 temp = malloc(sizeof(list_t));
 if (temp == NULL)
  return (NULL);
 temp->str = strdup(str);
 for (len = 0; str[len]; len++)
  ;
 temp->len = len;
 temp->next = NULL;
 ptr = *head;

 if (ptr == NULL)
 {
  *head = temp;
 }
 else
 {
  while (ptr->next != NULL)
  {
   ptr = ptr->next;
  }
  ptr->next = temp;
 }
 return (*head);
}