#include "tree.h"

/**
 * create_root - creates th root of a tree
 * @num: integer
 * Return: pointer to root;
 */

Tree *create_root(int num)
{
    Tree *r = (Tree *)malloc(sizeof(Tree));
    r->number = num;
    r->left_child = NULL;
    r->right_child = NULL;
    return r;
}