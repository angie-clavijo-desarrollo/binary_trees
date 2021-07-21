#include "binary_trees.h"
/**
 * binary_tree_nodes - validate if the tree for nodes
 *
 * @tree: parameter of node parent and child
 * Return: number that correspond if is balance or not
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		h_left = (1 + binary_tree_nodes(tree->left));

	if (tree->right)
		h_right = (1 + binary_tree_nodes(tree->right));

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);

}

/**
 * binary_tree_balance - validate if the tree is balance or not
 *
 * @tree: parameter of node parent and child
 * Return: number that correspond if is balance or not
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hight_l = 0;
	int hight_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		hight_l = (int)binary_tree_nodes(tree->left);
	else
		hight_l = -1;

	if (tree->right)
		hight_r = (int)binary_tree_nodes(tree->right);
	else
		hight_r = -1;

	return (hight_l - hight_r);
}
