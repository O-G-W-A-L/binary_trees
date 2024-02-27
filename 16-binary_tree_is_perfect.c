#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
return (1 + right);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *l, *r;

if (tree == NULL)
return (0);
l = tree->left;
r = tree->right;
if (binary_tree_is_leaf(tree))
return (1);
if (l == NULL || r == NULL)
return (0);
if (binary_tree_height(l) == binary_tree_height(r))
{
if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
return (1);
}
return (0);
}
