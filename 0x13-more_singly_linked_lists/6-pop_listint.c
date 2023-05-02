#include "lists.h"

/**
 * pop_listint - delete the head node of a linked listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 *
 * Return: If the linked list is empty - 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

