#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: a singly linked list.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
 list_t *temp = head;

 while (temp != NULL)
 {
  temp = temp->next;
  free(head);
  head = temp;
 }
 }