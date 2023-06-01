#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * 
 * @parent: the main node of the tree
 * @value: the value for the nod
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
        return;

    newNode->parent = newNode;
    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return (newNode);
}
