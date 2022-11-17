#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least '1' child in a binary tree
 *
 * @tree: Root node pointer
 *
 * Return: Always unsigned integer
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int count;

	count = 0;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}

	return (count);
}
