#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL return 0.
 *	return the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ctr = 0;

	if (tree)
	{
		ctr++;
		ctr += binary_tree_size(tree->right);
		ctr += binary_tree_size(tree->left);
	}
	return (ctr);
}
