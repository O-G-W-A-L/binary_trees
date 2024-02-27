#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree.
 * @tree: a pointer to the root node of the BST to search.
 * @value: The value to search for in the BST.
 *
 * Return: If the tree is NULL or the value is not found, NULL.
 *         Otherwise, a pointer to the node containing the value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *node = (bst_t *)tree;

if (!tree)
return (NULL);

while (node)
{
if (value == node->n)
return (node);
if (value < node->n)
node = node->left;
else if (value > node->n)
node = node->right;
}

return (NULL);
}
