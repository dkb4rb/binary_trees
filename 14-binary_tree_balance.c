#include "binary_trees.h"
/**
* tree_height - measures the hight of the tree
* @tree:pointer to the root node of the tree
* Return: 0 if tree is NULL else the hight
*/

int tree_height(const binary_tree_t *tree)
{
	int h_l, h_r;

	if (tree == NULL)
		return (0);

	h_l = tree_height(tree->left);
	h_r = tree_height(tree->right);

	if (h_l >= h_r)
		return (h_l + 1);

	return (h_r + 1);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
* Return: 0 or balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}
