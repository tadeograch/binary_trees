#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_aux;
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
		right_aux = parent->right;
		parent->right = new_node;
		new_node->right = right_aux;
		right_aux->parent = new_node;
	}
	return (new_node);
}
