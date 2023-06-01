#include "binary_trees.h"

/**
 * binary_tree_is_root - checkes if the node is root
 *
 * @node: the node
 *
 * Return: 1 if true, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node !== NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
