#include "binary_trees.h"
/**
 *binary_tree_sibling - function that finds the sibling of a node
 *@node: node to find the sibling
 *Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || !node->parent)
		return (NULL);
	if (parent->left == node)
	{
		if (parent->right)
			return (parent->right);
		else
			return (NULL);
	}

	else if (parent->left)
		return (parent->left);
	else
		return (NULL);
}
