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
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
	{
		return (binary_tree_height(tree->left) + 1);
	}
	else if (tree->right != NULL)
	{
		return (binary_tree_height(tree->right) + 1);
	}
	else
	{
		return (0);
	}
}
