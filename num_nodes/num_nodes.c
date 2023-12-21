#include "main.h"

/**
 * nodes - calculates number of nodes
 * @r: pointer to the root of a tree
 * Return: number of nodes
 */

int nodes(Tree *r)
{
    if (r == NULL)
        return 0;
    return 1 + nodes(r->left_child) + nodes(r->right_child);
}