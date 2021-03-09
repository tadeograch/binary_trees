#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: pointer to de uncle, or NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 *
 * Return: pointer to de sibling, or NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
