#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: nodes or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
