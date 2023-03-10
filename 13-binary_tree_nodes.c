#include "binary_trees.h"
/**
 *binary_tree_nodes -function that count the nodes that have at least one child
 *@tree: root of the tree
 *Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
