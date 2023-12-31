#include "main.h"

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
    printf("What's the number for root ");
    scanf("%d", &data);
    root = create_root(data);
    for (int i = 1; i < num_nodes; i++)
    {
        printf("What's the number for this child ");
        scanf("%d", &data);
        root = insert_child(root, data);
    }
    printf("which child do you want to delete ");
    scanf("%d", &data);
    root = deleteNode(root, data);
    printf("tree after deleting this node\n");
    postfixe(root);
}