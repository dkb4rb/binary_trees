#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree && func)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->n);
		binary_tree_postorder(tree->right, func);
	}

}
