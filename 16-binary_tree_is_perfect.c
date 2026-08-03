#include "binary_trees.h"
/**
 * perfect_height - checks if a tree is perfect and returns its height
 * @tree: pointer to the node to check
 *
 * Return: height of tree if perfect, -1 otherwise
 */
static int perfect_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = perfect_height(tree->left);
	rh = perfect_height(tree->right);
	if (lh == -1 || rh == -1 || lh != rh)
		return (-1);
	return (lh + 1);
}

/**
 * binary_tree_is_perfect - Write a function that
 * checks if a binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if tree perfect or 0 if fail
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (perfect_height(tree) != -1);
}
