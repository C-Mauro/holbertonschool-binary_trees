#include "binary_trees.h"
#include <stdio.h>
/**
 *binary_tree_leaves -count the leaves in binary tree
 *@tree:  pointer to the root node of the tree to count the leaves
 *Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}

