#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree);
int tree_height(const binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

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
* binary_tree_is_perfect - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
* Return: 0 or balance factor
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t l_r, l_l;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	l_r = binary_tree_height(right);
	l_l = binary_tree_height(left);
	if (l_r == l_l)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
