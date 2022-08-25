#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node:  pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!node)
		return (0);

	new->parent = node->parent;
	new->left = node->left;
	new->right = node->right;

	if (!new->left && !new->right)
		return (1);

	return (0);
}
