#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert a node as the left-child
 *
 * @parent: Parent node
 * @value: Integer to be set
 *
 * Return: Always pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_n;

	if (parent == NULL)
		return (NULL);

	left_n = binary_tree_node(parent, value);
	if (left_n == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = left_n;
	}
	else
	{
		left_n->left = parent->left;
		parent->left = left_n;
		left_n->left->parent = left_n;
	}

	return (left_n);
}
