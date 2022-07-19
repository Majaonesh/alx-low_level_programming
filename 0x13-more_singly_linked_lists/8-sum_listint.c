#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
assert(list != NULL);

Node *currentNode = list->head;
int sum = 0;

for (currentNode = currentNode->next; currentNode != NULL; currentNode = currentNode->next)
{
sum = sum + currentNode->data;
}
return (sum);
}
