#include "binary_trees.h"

/**
 * *binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL If node is NULL or the parent is NULL or If node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
