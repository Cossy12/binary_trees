#include "binary_trees.h"

/**
 *
 *@Pointer_tree:  root node of tree that
 * Return: 0
 *
 */

size_t binary_tree_height(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree)
	{
		size_t q = 0, v = 0;

		q = Pointer_tree->left ? 1 + binary_tree_height(Pointer_tree->left) : 0;
		v = Pointer_tree->right ? 1 + binary_tree_height(Pointer_tree->right) : 0;
		return ((q > v) ? q : v);
	}
	return (0);
}

