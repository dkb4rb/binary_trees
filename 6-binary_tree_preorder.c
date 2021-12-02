#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
* binary_tree_preorder - function that goes through a
*	binary tree using pre-order traversal
* @tree: this is representation to node binary_tree
* @func: Is the representation to pointer to function
* Return: Nothing
*/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
