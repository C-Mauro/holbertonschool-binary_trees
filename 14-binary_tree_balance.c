#include "binary_trees.h"

/**
 *binary_tree_balance -  function that measures the balance factor
 *@tree: root of the tree
 *Return: balance factor;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		right = binary_tree_balance(tree->right) + 1;

	if (tree->left)
		left = binary_tree_balance(tree->left) + 1;

	return (left - right);
}
