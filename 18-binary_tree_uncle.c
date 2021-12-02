#include "binary_trees.h"

/**
 * *binary_tree_uncle - Function that finds
 * the uncle of a node
 * @node: Pointer to the node to find the uncle.
 * Return: Uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	return (node->parent->parent->right);
}
