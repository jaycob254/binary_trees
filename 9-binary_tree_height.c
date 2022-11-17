#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Root node pointer
 *
 * Return: Always unsigned integer
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int left, right;

	left = 0, right = 0;
	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left > right) ? left : right);
}
