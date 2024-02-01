#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: If tree is NULL return 0.
 *	return the count of the leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->right && !tree->left) ? 1 : 0;
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->left);
	}
	return (leaves);
}
