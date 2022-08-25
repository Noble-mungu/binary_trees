#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: tree node
 * Return: Pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent;
	if (temp->left == node)
	{
		if (temp->right != NULL)
			return (temp->right);
		else
			return (NULL);
	}
	else if (temp->right == node)
	{
		if (temp->left != NULL)
			return (temp->left);
		else
			return (NULL);
	}
	return (NULL);
}
