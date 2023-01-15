#include "binary_trees.h"
#include <stdio.h>
/**
 *binary_tree_is_perfect -checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: If tree is perfect 1, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, full;

	if (!tree)
		return (0); 

	if (tree)
	{
		balance = binary_tree_balance(tree);
		full = binary_tree_is_full(tree);
		if (balance == 0 && full == 1)
		{
			return (1);
	
		}
	}
	return (0);
}

/**
 *binary_tree_balance -  function that measures the balance factor
 *@tree: root of the tree
 *Return: balance factor;
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

	if (tree)
	{
		right = 1 + binary_tree_height(tree->right);
		left = 1 + binary_tree_height(tree->left);
	}
	if (left > right)
		return (left);
	return (right);
}
/**
 *binary_tree_is_full - function that verify if the tree is full
 *@tree: root of the tree
 *Return: 0 if its not full and 1 if it is
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}
/**
 *binary_tree_is_leaf -chech if the node is leaf
 *@node: pointer to node to check
 *Return: 1 if is leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}
