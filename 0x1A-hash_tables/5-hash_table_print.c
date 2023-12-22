#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *point;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			point = ht->array[i];
			while (point != NULL)
			{
				printf("'%s': '%s'", point->key, point->value);
				point = point->next;
				if (point != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
