#include "binary_trees.h"
/**
 *binary_tree_uncle - function that return the uncle of a node
 *@node: node to verify
 *Return: uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL)
		return (NULL);

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (parent->parent->left == parent)
		return (parent->parent->right);
	else
		return (parent->parent->left);
}