#include "binary_trees.h"

/**
 * *binary_tree_sibling - Function that finds
 * the sibling of a node.
 * @node: Pointer to the node to find the sibling
 * Return: Sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left->n == node->n)
		{
			return (node->parent->right);
		}
	}
	if ((node->parent->left != NULL && node->parent->right == NULL) ||
	    (node->parent->left == NULL && node->parent->right != NULL))
	{
		return (NULL);
	}
	return (node->parent->left);
}
