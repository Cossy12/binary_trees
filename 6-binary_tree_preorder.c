#include "binary_trees.h"

/**
 * @Pointer_tree: pointer to the tree to traverse
 * @func:  function to call each node
 *
 */
void binary_tree_preorder(const binary_tree_t *Pointer_tree, void (*func)(int))
{
	if (Pointer_tree && func)
	{
		func(Pointer_tree->n);

		binary_tree_preorder(Pointer_tree->left, func);
		binary_tree_preorder(Pointer_tree->right, func);
	}
}

