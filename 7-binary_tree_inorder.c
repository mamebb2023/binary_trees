#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes Inorder traversal on a binary tree
 *
 * @tree: the binary tree
 * @func: the function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
