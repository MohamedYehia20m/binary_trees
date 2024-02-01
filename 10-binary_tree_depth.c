#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: If tree is NULL return 0.
 *	return depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree->parent && tree) ? (binary_tree_depth(tree->parent) + 1) : 0);
}
