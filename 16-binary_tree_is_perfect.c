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
		return (0);

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}
