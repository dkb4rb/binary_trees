#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
* binary_tree_is_leaf - Comprobe if node is node leaf
* @node: representation to new node
* Return: 1 or 0 if node is NULL
*/


int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->left != NULL)
		return (0);
	if (node->right != NULL)
		return (0);
	return (1);
}
