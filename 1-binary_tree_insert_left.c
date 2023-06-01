#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates the left node for the parent
 *
 * @parent: the parent node
 * @value: the value for the new node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->parent = parent;
			new_node->right = NULL;
			new_node->n = value;
			new_node->left = parent->left;
			if (parent->left != NULL)
				parent->left->parent = new_node;
			parent->left = new_node;
		}
	}
	return (new_node);
}
