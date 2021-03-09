#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the root node of the tree to measure the depth.
 *
 * Return: depth or 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
