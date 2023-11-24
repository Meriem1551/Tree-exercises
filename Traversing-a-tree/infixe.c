#include "traverseTree.h"

/**
 * infixe - traverses a tree
 * @r: pointer to root of a tree
 * Return: void
 */

void infixe(Tree *r)
{
    if (r != NULL)
    {
        infixe(r->left_child);
        printf("%d \n", r->number);
        infixe(r->right_child);
    }
}