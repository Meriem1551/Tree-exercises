#include "traverseTree.h"

/**
 * infixe - traverses a tree
 * @r: pointer to root of a tree
 * Return: void
 */

int infixe(Tree *r)
{
    if (r != NULL)
    {
        return r->number + infixe(r->left_child) + infixe(r->right_child);
    }
}