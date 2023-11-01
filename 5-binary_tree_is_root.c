#include "binary_trees.h"

/**
 * @main_nd: pointer to the root
 *
 * Return: null
 *
 */

int binary_tree_is_root(const binary_tree_t *main_nd)
{
	if (main_nd == NULL || main_nd->parent != NULL)
		return (0);
	return (1);
}

