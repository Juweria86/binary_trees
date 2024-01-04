#include "binary_trees.h"

/**
 * binary_tree_insert_right - nserts a node as the right-child of another node.
 * @parent: pointer to the node to insert right child.
 * @value: value to store in the new node.
 * Return: pointer to the created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
