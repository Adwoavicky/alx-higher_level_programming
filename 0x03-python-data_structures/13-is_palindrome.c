#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: beginning of listnt_t
 * @n: int to be added
 * Return: address of the new element otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = *head;
	*head = k;
	return (k);
}

/**
 * is_palindrome - checks if a singly linked list is palindrome
 * @head: begining of listint_t
 * Return: 1 if it is palindrome otherwise 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *aux = NULL, *aux2 = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&aux, head2->n);
		head2 = head2->next;
	}
	aux2 = aux;
	while (*head != NULL)
	{
		if ((*head)->n != aux2->n)
		{
			free_listint(aux);
			return (0);
		}
		*head = (*head)->next;
		aux2 = aux2->next;
	}
	free_listint(aux);
	return (1);
}
