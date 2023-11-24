#include "tree.h"

/**
 * insert_child - adds new node to tree
 * @r: pointer to root of tree
 * @n: number
 * Return: pointer to new tree
 */

Tree *insert_child(Tree *r, int n)
{

    if (r == NULL)
        return create_root(n);
    if (n < r->number)
        r->left_child = insert_child(r->left_child, n);
    else
    {
        if (n > r->number)
            r->right_child = insert_child(r->right_child, n);
        else
            printf("Number already existe, can't add it");
    }
    return r;
}
