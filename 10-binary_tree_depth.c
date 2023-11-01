#include "binary_trees.h"

/**
 * binary_tree_depth 
 *
 * @Pointer_tree: tree to get the depth
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *Pointer_tree)
{
	return ((Pointer_tree && Pointer_tree->parent) ? 1 + binary_tree_depth(Pointer_tree->parent) : 0);
}

