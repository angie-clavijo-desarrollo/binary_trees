#include "binary_trees.h"
/**
 * binary_tree_is_full - validate if tree is full or not
 *
 * @tree: parameter of node parent and child
 * Return: 0 is not full or 1 is fully
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
