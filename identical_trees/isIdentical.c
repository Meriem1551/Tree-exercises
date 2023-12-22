#include "main.h"

/**
 * isIdentical - check if 2 trees are identical
 * @r1: pointer to the root of 1st tree
 * @r2: pointer to the root of 2nd tree
 * Return: true if they are identical, false otherwise
 */

bool isIdentical(Tree *r1, Tree *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;
    return (r1 != NULL && r2 != NULL) &&
           (r1->number == r2->number) &&
           (isIdentical(r1->left_child, r2->left_child)) &&
           (isIdentical(r1->right_child, r2->right_child));
}