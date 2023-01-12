#include "binary_trees.h"

/**
 *binary_tree_height - function that calculates the height of a binary tree
 *@tree: root of the tree
 *Return: height of the tree or 0 if root is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);

	if (left > right)
		return (left);
	return (right);
}


