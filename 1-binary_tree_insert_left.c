#include "binary_trees.h"

/**
 *@parent: insert the left-child in
 *@numval: the numval to store in the current node
 *
 * Return:  pointer 
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int numval)
{
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	current = binary_tree_node(parent, numval);
	if (current == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		current->left = parent->left;
		parent->left->parent = current;
	}
	parent->left = current;

	return (current);
}

