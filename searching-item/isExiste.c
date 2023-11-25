#include "search.h"

/**
 * isExiste - checks if a given number existes in a tree
 * @r: pointer to a tree
 * @t: the number we're looking for
 * Return: true if it existe, false otherwise
 */

bool isExiste(Tree *r, int t)
{
    if (r == NULL)
        return false;
    if (t == r->number)
        return true;
    else
    {
        if (t < r->number)
            isExiste(r->left_child, t);
        else
            isExiste(r->right_child, t);
    }
}