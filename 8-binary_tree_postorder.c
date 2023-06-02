#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes postorder traversal on a tree
 *
 * @tree: the binary tree
 * @func: the function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (fucn != NULL))
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preordre(tree->right, func);
		func(tree->n);
	}
}
