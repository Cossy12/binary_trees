#include "binary_trees.h"

/**
 * @main_nd: pointer to the main_nd 
 *
 * Return:  null
 */

int binary_tree_is_leaf(const binary_tree_t *main_nd)
{
	if (main_nd == NULL || main_nd->left != NULL || main_nd->right != NULL)
		return (0);
	return (1);
}

