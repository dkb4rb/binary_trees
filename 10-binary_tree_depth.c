#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: this is pointert to node binary_tree
* Return: size to binary tree or 0
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t test;

	if (tree && tree->parent)
	{
		test = 1 + binary_tree_depth(tree->parent);
		return (test);
	}
	return (0);
}
