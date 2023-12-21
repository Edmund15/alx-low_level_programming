#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(shash_node_t *) * size);
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add
 * @value: The value to add
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *node, *prev = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	node = ht->shead;
	while (node != NULL && strcmp(key, node->key) > 0)
	{
		prev = node;
		node = node->snext;
	}

	new_node->next = ht->array[key_index((unsigned char *)key, ht->size)];
	ht->array[key_index((unsigned char *)key, ht->size)] = new_node;

	if (prev == NULL)
		new_node->snext = ht->shead;
	else
		new_node->snext = prev->snext;

	if (new_node->snext == NULL)
		ht->stail = new_node;

	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	return (1);
}


/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(key, node->key) > 0)
		node = node->snext;

	if (node != NULL && strcmp(key, node->key) == 0)
		return (node->value);
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted
 * hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(ht->array);
	free(ht);
}
