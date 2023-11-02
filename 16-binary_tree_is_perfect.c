#include "binary_trees.h"

unsigned char leaf_dec(const binary_tree_t *node);
size_t depth(const binary_tree_t *Pointer_tree);
const binary_tree_t *get_leaf(const binary_tree_t *Pointer_tree);
int recursive_rsp_is(const binary_tree_t *Pointer_tree,
						 size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *Pointer_tree);



unsigned char leaf_dec(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}


size_t depth(const binary_tree_t *Pointer_tree)
{
	return (Pointer_tree->parent != NULL ? 1 + depth(Pointer_tree->parent) : 0);
}


const binary_tree_t *get_leaf(const binary_tree_t *Pointer_tree)
{
	if (leaf_dec(Pointer_tree) == 1)
		return (Pointer_tree);
	return (Pointer_tree->left ? get_leaf(Pointer_tree->left) : get_leaf(Pointer_tree->right));
}


int recursive_rsp_is(const binary_tree_t *Pointer_tree,
						 size_t leaf_depth, size_t level)
{
	if (leaf_dec(Pointer_tree))
		return (level == leaf_depth ? 1 : 0);
	if (Pointer_tree->left == NULL || Pointer_tree->right == NULL)
		return (0);
	return (recursive_rsp_is(Pointer_tree->left, leaf_depth, level + 1) &&
			recursive_rsp_is(Pointer_tree->right, leaf_depth, level + 1));
}


int binary_tree_is_perfect(const binary_tree_t *Pointer_tree)
{
	if (Pointer_tree == NULL)
		return (0);
	return (recursive_rsp_is(Pointer_tree, depth(get_leaf(Pointer_tree)), 0));
}

