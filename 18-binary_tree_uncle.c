#include "binary_trees.h"



binary_tree_t *binary_tree_uncle(binary_tree_t *main_nd)
{
	if (main_nd == NULL ||
		main_nd->parent == NULL ||
		main_nd->parent->parent == NULL)
		return (NULL);
	if (main_nd->parent->parent->left == main_nd->parent)
		return (main_nd->parent->parent->right);
	return (main_nd->parent->parent->left);
}

