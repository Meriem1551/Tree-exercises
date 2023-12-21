#include "main.h"

/**
 * max - finds the maximum number in a tree
 * @r: pointer to the root of a tree
 * Return: maximum number
 */

int max(Tree *r)
{
    Tree *tmp;
    if (r == NULL)
        printf("empty tree");
    else
    {
        tmp = r;
        while (tmp->right_child != NULL)
        {
            tmp = tmp->right_child;
        }
    }
    return (tmp->number);
}