#include "binary_trees.h"

/**
 * size_t binary_tree_height - function that goes through a binary
 * tree using in-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * Return: nothing.
 */

int binary_tree_is_leaf(const binary_tree_t *node);

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heighleft = 0;
	size_t heighright = 0;
	size_t check = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (binary_tree_is_leaf(tree->left));
		{
			heighleft = binary_tree_height(tree->left);
			heighright = binary_tree_height(tree->right);
			if (heighleft >= heighright)
			{
				return (heighleft + 1);
			}
			else
			{
				return (heighright + 1);
			}
		}
	}
}
