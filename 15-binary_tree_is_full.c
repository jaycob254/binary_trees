#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Root node pointer
 *
 * Return: '1' if True and '0' if False
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((binary_tree_is_full(tree->left) == 0) ||
			(binary_tree_is_full(tree->right) == 0))
	{
		return (0);
	}

	return (1);
}
