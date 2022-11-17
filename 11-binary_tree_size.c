#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Root node pointer
 *
 * Return: Always unsigned integer
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int count;

	count = 0;
	if (tree == NULL)
		return (0);

	if (tree)
	{
		count++;
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}

	return (count);
}
