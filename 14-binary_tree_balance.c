#include "binary_trees.h"
#include <stdio.h>
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
