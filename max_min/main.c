#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    int num_nodes, data;
    Tree *root;

    printf("Enter number of nodes: ");
    scanf("%d", &num_nodes);
    printf("What is the root's number");
    scanf("%d", &data);
    root = create_root(data);
    for (int i = 0; i < num_nodes; i++)
    {
        printf("What's the number for this child? ");
        scanf("%d", &data);
        root = insert_child(root, data);
    }
    printf("MIN of this tree is: %d\n", min(root));
    printf("MAX of this tree is: %d\n", max(root));
}