#include "binary_trees.h"
/**
 * binary_tree_size - Write a function that
 * measures the size of a binary tree
 * @tree: pointer to root node of tree to measure its size
 * Return: size of the tree or 0 if fail
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
