#include "tree.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    int num_nodes, data;
    Tree *root;
    printf("Enter number of nodes ");
    scanf("%d", &num_nodes);
    printf("What's the number for first node ");
    scanf("%d", &data);
    root = create_root(data);
}