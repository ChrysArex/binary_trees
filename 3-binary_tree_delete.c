#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right, *parent = tree;

	if (tree)
	{
		left = parent->left;
		right = parent->right;
		free(parent);
		binary_tree_delete(left);
		binary_tree_delete(right);
	}
}
