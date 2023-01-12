#include "binary_trees.h"
#include <stdio.h>
/**
 *binary_tree_preorder -traverse binary tree root-left-right
 *@tree: pointer to the root node of the tree to traverse.
 *@func: pointer to a function to call for each node.
 *Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	printf("%d\n", tree->n);
	func(tree->left->n);
	func(tree->left->left->n);
	func(tree->left->right->n);

	func(tree->right->n);
	func(tree->right->left->n);
	func(tree->right->right->n);

}
