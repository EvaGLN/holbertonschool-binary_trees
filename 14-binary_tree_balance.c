#include "binary_trees.h"
/**
 * height - measures the height of a binary tree
 * @tree: pointer to root node of the tree to mesure height
 * Return: height of tree or -1 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (-1);
	lh = height(tree->left);
	rh = height(tree->right);
	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_balance - Write a function that
 * measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure balance factor
 * Return: balance factor or 0 if fail
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
