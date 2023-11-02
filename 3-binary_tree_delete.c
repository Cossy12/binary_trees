#include "binary_trees.h"

/**
 * @Pointer_tree:root node of the tree to del
 *
 * Return: 0  Pointer_tree  NULL
 */
void binary_tree_delete(binary_tree_t *Pointer_tree)
{
	if (Pointer_tree != NULL)
	{
		binary_tree_delete(Pointer_tree->left);
		binary_tree_delete(Pointer_tree->right);
		free(Pointer_tree);
	}
}

