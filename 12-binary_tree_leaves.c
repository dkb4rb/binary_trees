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

int binary_tree_is_leaf(const binary_tree_t *node);
/**
* binary_tree_leaves - measures the leaves of the tree
* @tree:pointer to the root node of the tree
* Return: 0 if tree is NULL else the size leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	h_left = binary_tree_leaves(tree->left);
	h_right = binary_tree_leaves(tree->right);

	return (h_right + h_left);
}
