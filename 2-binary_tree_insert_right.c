#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as a right-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the newNode node.
 *
 * Return: Otherwise - a pointer to the newNode node.
 *
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
