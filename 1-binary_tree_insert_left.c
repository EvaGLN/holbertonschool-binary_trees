#include "binary_trees.h"
/**
 * binary_tree_insert_left - Write a function that
 * inserts a node as the left-child of another node
 * @parent: pointer to the node to insert left child
 * @value: value to store in the new node
 * Return: pointer to the created node o NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	node->left = parent->left;
	if (parent->left)
		parent->left->parent = node;
	parent->left = node;
	return (node);
}
