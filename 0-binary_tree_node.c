#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree;

	binary_tree = malloc(sizeof(binary_tree_t));
	if (binary_tree == NULL)
		return (NULL);
	binary_tree->n = value;
	binary_tree->parent = parent;
	binary_tree->left = NULL;
	binary_tree->right = NULL;
	return (binary_tree);
}
