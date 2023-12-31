#include "main.h"

Tree *insertLeft(Tree *r1, Tree *r2)
{
    if (r1 == NULL)
        return r2;
    r1->left_child = insertLeft(r1->left_child, r2);
    return r1;
}