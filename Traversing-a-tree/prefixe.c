#include "traverseTree.h"

/**
 * prefixe - traverses a tree: ROOT LEFT RIGHT
 * @r: pointer to a tree
 * Return: void
 */

void prefixe(Tree *r)
{
    if (r != NULL)
    {
        printf("%d \n", r->number);
        prefixe(r->left_child);
        prefixe(r->right_child);
    }
}