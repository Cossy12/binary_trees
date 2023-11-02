#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree)
	{
		return (binary_tree_height(Pointer_tree->left) - binary_tree_height(Pointer_tree->right));
	}
	return (0);
}

size_t binary_tree_height(const binary_tree_t *Pointer_tree)
{
	size_t q = 0, v = 0;

	if (Pointer_tree)
	{
		q = (Pointer_tree->left) ? 1 + binary_tree_height(Pointer_tree->left) : 1;

		v = (Pointer_tree->right) ? 1 + binary_tree_height(Pointer_tree->right) : 1;
		return (q > v ? q : v);
	}
	return (0);
}


