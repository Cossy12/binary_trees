#include "binary_trees.h"

/**

 * @numval: the numval to put in the current node

 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int numval)
{
	binary_tree_t *current;

	current = malloc(sizeof(binary_tree_t));
	if (current == NULL)
		return (NULL);
	current->n = numval;
	current->parent = parent;
	current->left = NULL;
	current->right = NULL;

	return (current);
}

