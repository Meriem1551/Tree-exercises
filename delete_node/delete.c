#include "main.h"

Tree *deleteNode(Tree *r, int n)
{
    Tree *tmp = NULL;
    if (r == NULL)
    {
        printf("couldn't find  the node");
        return r;
    }
    if (r->number == n)
    {
        tmp = r;
        r = insertLeft(r->right_child, r->left_child);
        free(tmp);
    }
    if (n < r->number)
    {
        r->left_child = deleteNode(r->left_child, n);
    }
    if (n > r->number)
    {
        r->right_child = deleteNode(r->right_child, n);
    }
    return r;
}