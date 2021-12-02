#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
size_t size_node_l(const binary_tree_t *tree);
size_t size_node_r(const binary_tree_t *tree);

/**
* binary_tree_height -  function that measures the height of a binary tree
* @tree: pointer to node of binary_tree_t
* Return: 0 if tree is NULL
* Otherwise return size the node
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t left = 0, right = 0;

		left = size_node_l(tree);
		right = size_node_r(tree);
		return ((left > right) ? 1 : right);
	}

	return (0);
}

/**
* size_node_l - function to return the size the node
* @tree: pointer to node of binary_tree_t
* Return: 0 if tree in left or right not exist
* Otherwise return size
*/


size_t size_node_l(const binary_tree_t *tree)
{
	if (tree->left)
	{
		size_t val = 0;

		val = 1 + binary_tree_height(tree->left);
		return (val);
	}

	return (0);
}
/**
* size_node_r - function to return the size the node in right
* @tree: pointer to node binary_tree_t
* Return: 0 if tree in right not exist
* Otherwise return the size node
*/

size_t size_node_r(const binary_tree_t *tree)
{
	if (tree->right)
	{
		size_t val = 0;

		val = 1 + binary_tree_height(tree->right);
		return (val);
	}
	return (0);
}
