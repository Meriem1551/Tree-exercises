#include "traverseTree.h"

/**
 * postfixe - traverse a tree: LEFT RIGHT ROOT
 * @r: pointer to a tree (root)
 * Return: void
 */

void postfixe(Tree *r)
{
    if (r != NULL)
    {
        postfixe(r->left_child);
        postfixe(r->right_child);
        printf("%d \n", r->number);
    }
}