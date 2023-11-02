#include "binary_trees.h"

/**
 * @Pointer_tree: the root node of the tree
 *
 * Return: number of leaves 
 */

size_t binary_tree_leaves(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree == NULL)
		return (0);
	if (Pointer_tree->left == NULL || Pointer_tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(Pointer_tree->left) + binary_tree_leaves(Pointer_tree->right));
	}
}

