#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (!tree)
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_left >= h_right)
	{
		if (tree->parent != NULL)
			h_left++;
		return (h_left);
	}
	else
	{
		if (tree->parent != NULL)
			h_right++;
		return (h_right);
	}
}
