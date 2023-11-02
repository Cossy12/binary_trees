#include "binary_trees.h"


int recursive_full(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree)
	{
		if ((Pointer_tree->left == NULL && Pointer_tree->right != NULL) ||
			(Pointer_tree->left != NULL && Pointer_tree->right == NULL) ||
			recursive_full(Pointer_tree->left) == 0 ||
			recursive_full(Pointer_tree->right) == 0)
			return (0);
	}
	return (1);
}


int binary_tree_is_full(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree == NULL)
		return (0);
	return (recursive_full(Pointer_tree));
}

