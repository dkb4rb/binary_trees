#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if
 * a given node is a root.
 * @node: is a pointer to the node to check
 * Return: Always 0 (Success)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
