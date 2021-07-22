#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that validate if
 * given tree is a preferct or not
 *
 * @tree: parameter of node parent and child
 * Return: if the tree is perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	return (0);
}

/**
 * binary_tree_height- Function that height of tree
 *
 * @tree: parameter of node parent and child
 * Return: if the tree is perfect or not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c_left = 0;
	size_t c_right = 0;

	if (tree != NULL)
	{
		if (tree->left)
			c_left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			c_right = 1 + binary_tree_height(tree->right);

		if (c_left > c_right)
			return (c_left);

		if (c_right > c_left)
			return (c_right);
	}
	return (0);
}
