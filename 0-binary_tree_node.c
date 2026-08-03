#include "binary_trees.h"
/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node of NULL if fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(*node));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
