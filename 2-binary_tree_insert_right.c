#include "binary_trees.h"
/**
 * binary_tree_insert_right - Write a function that
 * inserts a node as the left child of another node
 * @parent: pointer to the node to insert right child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	node->right = parent->right;
	if (parent->right)
		prent->right->parent = node;
	parent->right = node;
	return (node);
}
