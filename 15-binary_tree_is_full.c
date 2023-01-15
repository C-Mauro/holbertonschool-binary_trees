#include "binary_trees.h"

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
