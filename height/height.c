#include "main.h"

/**
 * height - calculates the height of a tree
 * @r: pointer to root of a tree
 * Return: height
 */

int height(Tree *r)
{
    if (r == NULL)
        return 0;
    if (height(r->left_child) > height(r->right_child))
        return (1 + height(r->left_child));
    else
        return (1 + height(r->right_child));
}