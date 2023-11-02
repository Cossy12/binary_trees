#include "binary_trees.h"

/**
 * @Pointer_tree: the root node
 *
 */

size_t binary_tree_size(const binary_tree_t *Pointer_tree)
{
	size_t vol = 0;

	if (tree)
	{
		vol += 1;
		vol += binary_tree_size(Pointer_tree->left);
		vol += binary_tree_size(Pointer_tree->right);
	}
	return (vol);
}

