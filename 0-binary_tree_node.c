#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_tree_node -create a binary tree node
 *@parent: pointer to parent to the node to be created
 *@value: value to put in the new node
 *Return: node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	(void)(parent);
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	newnode->parent = parent;

	return (newnode);
	free(newnode);
}

