#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tree Tree;
/**
 * tree - struct to create a tree
 * @number: integer
 * @right_child: pointer to a struct
 * @left_child: pointer to a struct
 */

struct tree
{
    int number;
    struct tree *right_child;
    struct tree *left_child;
};
Tree *create_root(int);
Tree *insert_child(Tree *, int);
#endif