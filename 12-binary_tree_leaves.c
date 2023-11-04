#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	left += binary_tree_leaves(tree->left);
	right += binary_tree_leaves(tree->right);
	if (left == 0 && right == 0)
		return (1);
	else
		return (left + right);
}
