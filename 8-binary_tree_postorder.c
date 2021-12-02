#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: is ponter to binary_trees
* @func: this is all pointer to functions the nodes
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
