#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: a node to check.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node->right == NULL && node->left == NULL)
        return (1);
    
    return (0);
}