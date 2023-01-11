#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - function that adds a new node at left
 * @parent: is a pointer to the node to insert the left-child in
 * @value: value to put into the new node
 * Return: new_node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}
