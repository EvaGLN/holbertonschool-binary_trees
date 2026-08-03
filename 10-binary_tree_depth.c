#include "binary_trees.h"
/**
 * binary_tree_depth - Write a function that
 * measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of tree or 0 if fail
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ld, rd;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
