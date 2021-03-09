#include <stdlib.h>
#include "binary_trees.h"

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
