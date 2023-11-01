#include "binary_trees.h"

/**
 *@parent: root node
 *@numval: the numval to be inserted
 *
 * Return:  pointer tcreated 
 *
 */

 
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int numval)
{
binary_tree_t *post_node;

if (parent == NULL)
	return (NULL);

post_node = malloc(sizeof(binary_tree_t));
if (!post_node)
	return (NULL);
post_node->n = numval;
post_node->parent = parent;
post_node->left = NULL;
post_node->right = parent->right;
if (post_node->right)
{
	parent->right->parent = post_node;
}
parent->right = post_node;
return (post_node);
}

