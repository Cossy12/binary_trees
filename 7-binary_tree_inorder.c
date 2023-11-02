#include "binary_trees.h"

/**
 * @Pointer_tree: the root node
 * @func:  pointer to call each node
 */

void binary_tree_inorder(const binary_tree_t *Pointer_tree, void (*func)(int))
{
	if (!Pointer_tree || !func)
		return;
	binary_tree_inorder(Pointer_tree->left, func);
	func(Pointer_tree->n);
	binary_tree_inorder(Pointer_tree->right, func);
}

