#include "main.h"

/**
 * min - finds the minimum number in a tree
 * @r: pointer to the root of a tree
 * Return: minimum number
 */

int min(Tree *r)
{
    Tree *tmp;
    if (r == NULL)
        printf("empty tree");
    else
    {
        tmp = r;
        while (tmp->left_child != NULL)
        {
            tmp = tmp->left_child;
        }
    }
    return (tmp->number);
}