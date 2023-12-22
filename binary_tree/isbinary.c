#include "main.h"

/**
 * isBinary - checks if a tree is a binary tree or not
 * @r: pointer to the root of a tree
 * Return: true if it's a binary tree, false otherwise
 */

bool isBinary(Tree *r)
{
    if (r == NULL)
        return true;
    if (r->left_child != NULL && r->left_child->number >= r->number)
        return false;
    if (r->right_child != NULL && r->number >= r->right_child->number)
        return false;
    return isBinary(r->left_child) && isBinary(r->right_child);
}