#include "binary_trees.h"

/**
 * @Pointer_tree:  root of the tree to traverse
 * @func: function to call each node
 *
 * Return: 0 or Null
 */

void binary_tree_postorder(const binary_tree_t *Pointer_tree, void (*func)(int))
{
	if (!Pointer_tree || !func)
		return;
	binary_tree_postorder(Pointer_tree->left, func);
	binary_tree_postorder(Pointer_tree->right, func);
	func(Pointer_tree->n);
}

