#include "binary_trees.h"


binary_tree_t *binary_tree_sibling(binary_tree_t *main_nd)
{
	if (main_nd == NULL || main_nd->parent == NULL)
		return (NULL);
	if (main_nd->parent->left == main_nd)
		return (main_nd->parent->right);
	return (main_nd->parent->left);
}

