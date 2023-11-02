#include "binary_trees.h"



size_t binary_tree_nodes(const binary_tree_t *Pointer_tree)
{
	if (!Pointer_tree || (!Pointer_tree->left && !Pointer_tree->right))
	{
		return (0);
	}
	return (binary_tree_size(Pointer_tree) - binary_tree_leaves(Pointer_tree));
}



size_t binary_tree_size(const binary_tree_t *Pointer_tree)
{
	if (!Pointer_tree)
		return (0);
	return (1 + binary_tree_size(Pointer_tree->left) + binary_tree_size(Pointer_tree->right));
}



size_t binary_tree_leaves(const binary_tree_t *Pointer_tree)
{
	if (!Pointer_tree)
		return (0);
	if (Pointer_tree->left == NULL || Pointer_tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(Pointer_tree->left) + binary_tree_leaves(Pointer_tree->right));
}

